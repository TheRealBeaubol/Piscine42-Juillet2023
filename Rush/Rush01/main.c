/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:01:03 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/22 13:01:04 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_tab(char **tab);
void	ft_cond_fifth(char **tab, char *param);
void	ft_cond_fourth(char **tab, char *param);
void	ft_cond_first(char **tab, char *param);
void	ft_cond_sixth(char **tab, char nb);
void	ft_cond_second(char **tab, char *param);
void	ft_cond_third(char **tab, char *param);
void	ft_write(char **tab, int i1, int i2, char write);
void	ft_write_two(char **tab, int i1, int i2, char write1, int i3, int i4, char write2);
/*
>>	Si col/row = 3 -> Premiere case != 3

	Si col/row = 1 et 2 -> On a 4 sur le 1 et 3 sur le 2
	Si 2 cases manquantes, et une case sur une meme colonne/ligne avec le meme chiffre -> chiffre sur l'autre case
*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str = str + 1;
	}
}

int	ft_count_numbers(char *param)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (param[i] != '\0')
	{
		if (param[i] >= '1' && param[i] <= '4')
		{
			if (param[i + 1] == 32 || param[i + 1] == '\0')
				count++;
		}
		if ((param[i] == 32 && param[i + 1] == 32) || param[0] == 32)
			return (0);
		if (param[i] == 32 && param[i + 1] == '\0')
			return (0);
		if ((param[i] >= '1' && param[i] <= '4')
			&& (param[i + 1] >= '1' && param[i + 1] <= '4'))
			return (0);
		i++;
	}
	if (count != 16)
		return (0);
	return (1);
}

int	ft_error(char *param, int argc)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (param[i] != '\0')
	{
		if (!(param[i] >= '1' && param[i] <= '4') && param[i] != 32)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	if (ft_count_numbers(param) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

void	ft_fill_blanks_line1(char **tab)
{
	int	i;

	i = 0;
	while (i != 4)
	{
		if (tab[i][0] == '0' && tab[i][2] != '0')
		{
			if (tab[i][4] != '0' && tab[i][6] != '0')
				tab[i][0] = 58 - (tab[i][2] - 48) \
							- (tab[i][4] - 48) - (tab[i][6] - 48);
		}
		if (tab[i][2] == '0' && tab[i][0] != '0')
		{
			if (tab[i][4] != '0' && tab[i][6] != '0')
				tab[i][2] = 58 - (tab[i][0] - 48) \
							- (tab[i][4] - 48) - (tab[i][6] - 48);
		}
		i++;
	}
}

void	ft_fill_blanks_line2(char **tab)
{
	int	i;

	i = 0;
	while (i != 4)
	{
		if (tab[i][4] == '0' && tab[i][2] != '0')
		{
			if (tab[i][0] != '0' && tab[i][6] != '0')
				tab[i][4] = 58 - (tab[i][2] - 48) \
							- (tab[i][0] - 48) - (tab[i][6] - 48);
		}
		if (tab[i][6] == '0' && tab[i][2] != '0')
		{
			if (tab[i][4] != '0' && tab[i][0] != '0')
				tab[i][6] = 58 - (tab[i][2] - 48) \
							- (tab[i][4] - 48) - (tab[i][0] - 48);
		}
		i++;
	}
}

void	ft_fill_blanks_column1(char **tab)
{
	int	i;

	i = 0;
	while (i != 7)
	{
		if (tab[0][i] == '0' && tab[1][i] != '0')
		{
			if (tab[2][i] != '0' && tab[3][i] != '0')
				tab[0][i] = 58 - (tab[1][i] - 48) \
							- (tab[2][i] - 48) - (tab[3][i] - 48);
		}
		if (tab[1][i] == '0' && tab[0][i] != '0')
		{
			if (tab[2][i] != '0' && tab[3][i] != '0')
				tab[1][i] = 58 - (tab[0][i] - 48) \
							- (tab[2][i] - 48) - (tab[3][i] - 48);
		}
		i++;
	}
}

void	ft_fill_blanks_column2(char **tab)
{
	int	i;

	i = 0;
	while (i != 7)
	{
		if (tab[2][i] == '0' && tab[1][i] != '0')
		{
			if (tab[0][i] != '0' && tab[3][i] != '0')
				tab[2][i] = 58 - (tab[1][i] - 48) \
							- (tab[0][i] - 48) - (tab[3][i] - 48);
		}
		if (tab[3][i] == '0' && tab[0][i] != '0')
		{
			if (tab[2][i] != '0' && tab[1][i] != '0')
				tab[3][i] = 58 - (tab[0][i] - 48) \
							- (tab[2][i] - 48) - (tab[1][i] - 48);
		}
		i++;
	}
}

void	ft_fill_blanks(char **tab)
{
	ft_fill_blanks_line1(tab);
	ft_fill_blanks_line2(tab);
	ft_fill_blanks_column1(tab);
	ft_fill_blanks_column2(tab);
}

void	ft_tab_mana(void)
{
	char	line1[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	line2[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	line3[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	line4[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	*tab[4] = {line1, line2, line3, line4};

	/*line1 = (char [7]){'4', ' ', '3', ' ', '0', ' ', '0'};
	line2 = (char [7]){'4', ' ', '3', ' ', '0', ' ', '0'};
	line3 = (char [7]){'4', ' ', '3', ' ', '0', ' ', '0'};
	line4 = (char [7]){'4', ' ', '3', ' ', '0', ' ', '0'};
	tab = (char [4]){*line1, *line2, *line3, *line4};*/
	ft_cond_second(tab, "2 1 3 3 3 3 2 1 2 1 2 4 2 4 2 1");
	ft_cond_fifth(tab, "2 1 3 3 3 3 2 1 2 1 2 4 2 4 2 1");
	ft_cond_first(tab, "2 1 3 3 3 3 2 1 2 1 2 4 2 4 2 1");
	ft_cond_fourth(tab, "2 1 3 3 3 3 2 1 2 1 2 4 2 4 2 1");
	//ft_cond_sixth(tab, '1');
	//ft_cond_sixth(tab, '2');
	//ft_cond_sixth(tab, '3');
	ft_cond_sixth(tab, '4');
	ft_fill_blanks(tab);
	ft_fill_blanks(tab);
	ft_cond_third(tab, "2 1 3 3 3 3 2 1 2 1 2 4 2 4 2 1");
	ft_fill_blanks(tab);
	ft_fill_blanks(tab);
	ft_write_tab(tab);
}

void ft_cond_sixth(char **tab, char nb)
{
	int	i;
	int	t;
	int	c;
	int	raw[4] = {'0','0','0','0'};
	int	col[4] = {'0','0','0','0'};
	int	a;
	int	b;
	int	index1;
	int	index2;
	
	t = 0;
	while (t != 4)
	{
		i = 0;
		while (i != 7)
		{
			if (tab[t][i] == nb)
			{
				raw[t] = '1';
				col[i/2] = '1';
			}
			i++;
		}
		t++;
	}
	a = 0;
	b = 0;
	c = 0;
	while (c != 4)
	{
		if (raw[c] == '1')
			a++;
		c++;
	}
	c = 0;
	while (c != 4)
	{
		if (col[c] == '1')
			b++;
		c++;
	}
	index1 = 0;
	index2 = 0;
	if (a > 2 && a < 4 && b > 2 && b < 4)
	{
		c = -1;
		while (raw[++c] != '0')
			index1++;
		c = -1;
		while (col[++c] != '0')
			index2 = index2 + 2;
	}
	ft_write(tab, index1, index2, nb);
}

void	ft_cond_third(char **tab, char *param)
{
	int	i;
	char	line1[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	line2[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	line3[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	line4[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	*tb[4] = {line1, line2, line3, line4};
	char	test[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	int	t;
	int	stocki;
	int	cpt;
	
	t = 0;
	while (t != 4)
	{
		i = 0;
		while (i != 7)
		{
			if (tab[t][i] != '0')
			{
				tb[t][i] = '1';
			}
			i++;
		}
		t++;
	}
	t = 0;
	while (t != 4)
	{
		i = 0;
		while (i != 7)
		{
			if (tb[t][i] == '1')
				test[i] = '1';
			if (t == 0)
			{
				if (param[0] == '3' || param[16] == '3')
					test[0] = '1';
				if (param[6] == '3' || param[24] == '3')
					test[6] = '1';
			}
			if (t == 3)
			{
				if (param[8] == '3' || param[22] == '3')
					test[0] = '1';
				if (param[14] == '3' || param[30] == '3')
					test[6] = '1';
			}
			if (t == 1)
			{
				if (param[18] == '3')
					test[0] = '1';
				if (param[26] == '3')
					test[6] = '1';
			}
			if (t == 2)
			{
				if (param[20] == '3')
					test[0] = '1';
				if (param[28] == '3')
					test[6] = '1';
			}
			i++;
		}
		i = 0;
		cpt = 0;
		while (test[i] != 0)
		{
			if (test[i] == '0')
			{
				cpt++;
				stocki = i; 
			}
			i++;
		}
		if (cpt == 1)
			ft_write(tab, t, stocki, '3');
		i = 0;
		while (test[i] != 0)
		{
			if (i == 1 || i%2 != 0)
				test[i] = ' ';
			else
				test[i] = '0';
			i++;
		}
		t++;
	}
}

int	ft_line_assign(char i)
{
	int	index;
	
	index = 0;
	if (i == 16 || i == 24)
		index = 0;
	if (i == 18 || i == 26)
		index = 1;
	if (i == 20 || i == 28)
		index = 2;
	if (i == 22 || i == 30)
		index = 3;
	return (index);
}

int	ft_column_assign(char i)
{
	int	index;

	index = 0;
	if (i == 0 || i == 8)
		index = 0;
	if (i == 2 || i == 10)
		index = 2;
	if (i == 4 || i == 12)
		index = 4;
	if (i == 6 || i == 14)
		index = 6;
	return (index);
}

void	ft_write(char **tab, int i1, int i2, char write)
{
	if (tab[i1][i2] == '0')
		tab[i1][i2] = write;
}

void	ft_write_two(char **tab, int i1, int i2, char write1, int i3, int i4, char write2)
{
	if (tab[i1][i2] == '0' && tab[i3][i4] == '0')
	{
		tab[i1][i2] = write1;
		tab[i3][i4] = write2;
	}
}

void	ft_cond_fifth(char **tab, char *param)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 6)
	{
		j = i + 7;
		if (param[i] == '1' && param[j] == '2')
		{
			ft_write_two(tab, 3, ft_column_assign(i), '4', 0, ft_column_assign(j), '3');
		}
		if (param[j] == '1' && param[i] == '2')
		{
			ft_write_two(tab, 0, ft_column_assign(j), '4', 3, ft_column_assign(i), '3');
		}
	i++;
	}
	while (i <= 14)
	{
		j = i + 7;
		if (param[j] == '1' && param[i] == '2')
		{
			ft_write_two(tab, ft_line_assign(j), 0, '4', ft_line_assign(i), 6, '3');
		}
		if (param[i] == '1' && param[j] == '2')
		{
			ft_write_two(tab, ft_line_assign(i), 6, '4', ft_line_assign(j), 0, '3');
		}
	i++;
	}
}

void	ft_cond_fourth(char **tab, char *param)
{
	int	i;

	i = 0;
	while (param[i] != 0)
	{
		if (param[i] == '3')
		{
			if (0 <= i && i <= 6 && (tab[2][i] == '3') && (tab[3][i] == '4'))
				ft_write_two(tab, 0, i, '2', 1, i, '1');
			if (7 <= i && i <= 13 && (tab[ft_line_assign(i)][2] == '3') && (tab[ft_line_assign(i)][0] == '4'))
				ft_write_two(tab, 3, ft_column_assign(i), '2', 2, ft_column_assign(i), '1');
			if (14 <= i && i <= 20 && tab[ft_line_assign(i)][0] == '4' && tab[ft_line_assign(i)][2] == '3')
				ft_write_two(tab, 6, ft_line_assign(i), '2', 4, ft_line_assign(i), '1');
			if (21 <= i && i <= 27 && tab[ft_line_assign(i)][4] == '3' && tab[ft_line_assign(i)][6] == '4')
				ft_write_two(tab, ft_line_assign(i), 0, '2', ft_line_assign(i), 2, '1');
		}
		i++;
	}
}

void	ft_cond_first(char **tab, char *param)
{
	int	i;

	i = 0;
	while (param[i] != 0)
	{
		if (param[i] == '1')
		{
			if (0 <= i && i <= 6)
				ft_write(tab, 0, i, '4');
			if (8 <= i && i <= 14)
				ft_write(tab, 3, ft_column_assign(i), '4');
			if (16 <= i && i <= 22)
				ft_write(tab,ft_line_assign(i), 0, '4');
			if (24 <= i && i <= 30)
				ft_write(tab, ft_line_assign(i), 6, '4');
		}
		i++;
	}
}

void    ft_cond_second(char **tab, char *param)
{
	int    i;

	i = 0;
	while (param[i] != 0)
	{
		if (param[i] == '4')
		{
			if (0 <= i && i <= 6)
				tab[0][i] = '1';
			if (0 <= i && i <= 6)
				tab[1][i] = '2';
			if (0 <= i && i <= 6)
				tab[2][i] = '3';
			if (0 <= i && i <= 6)
				tab[3][i] = '4';
			if (8 <= i && i <= 14)
				tab[3][ft_column_assign(i)] = '1';
			if (8 <= i && i <= 14)
				tab[2][ft_column_assign(i)] = '2';
			if (8 <= i && i <= 14)
				tab[1][ft_column_assign(i)] = '3';
			if (8 <= i && i <= 14)
				tab[0][ft_column_assign(i)] = '4';
			if (16 <= i && i <= 22)
				tab[ft_line_assign(i)][0] = '1';
			if (16 <= i && i <= 22)
				tab[ft_line_assign(i)][2] = '2';
			if (16 <= i && i <= 22)
				tab[ft_line_assign(i)][4] = '3';
			if (16 <= i && i <= 22)
				tab[ft_line_assign(i)][6] = '4';
			if (24 <= i && i <= 30)
				tab[ft_line_assign(i)][6] = '1';
			if (24 <= i && i <= 30)
				tab[ft_line_assign(i)][4] = '2';
			if (24 <= i && i <= 30)
				tab[ft_line_assign(i)][2] = '3';
			if (24 <= i && i <= 30)
				tab[ft_line_assign(i)][0] = '4';
		}
		i++;
	}
}

void	ft_write_tab(char **tab)
{
	int	i;

	i = 0;
	while (i != 4)
	{
		write(1, tab[i], 7);
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	ft_tab_mana();
}
