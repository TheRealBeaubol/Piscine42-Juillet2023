/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchagrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:23:24 by vchagrel          #+#    #+#             */
/*   Updated: 2023/07/23 16:38:25 by vchagrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_line_assign(char c);
int		ft_column_assign(char c);
void	ft_write(char **tab, int i1, int i2, char write);
int		ft_write_two(int i, int j);
int		ft_write_test(char **tab, int i1, int i2, char write);

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
			if (ft_write_two(ft_write_test(tab, 3, ft_column_assign(i), '4'), \
			ft_write_test(tab, 0, ft_column_assign(j), '3')) == 1)
			{
				ft_write(tab, 3, ft_column_assign(i), '4');
				ft_write(tab, 0, ft_column_assign(j), '3');
			}
		}
		if (param[j] == '1' && param[i] == '2')
		{
			if (ft_write_two(ft_write_test(tab, 0, ft_column_assign(j), '4'), \
			ft_write_test(tab, 3, ft_column_assign(i), '3')) == 1)
			{
				ft_write(tab, 0, ft_column_assign(j), '4');
				ft_write(tab, 3, ft_column_assign(i), '3');
			}
		}
	i++;
	}
	while (i <= 14)
	{
		j = i + 7;
		if (param[j] == '1' && param[i] == '2')
		{
			if (ft_write_two(ft_write_test(tab, ft_line_assign(j), 0, '4'), \
			ft_write_test(tab, ft_line_assign(i), 6, '3')) == 1)
			{
				ft_write(tab, ft_line_assign(j), 0, '4');
				ft_write(tab, ft_line_assign(i), 6, '3');
			}
		}
		if (param[i] == '1' && param[j] == '2')
		{
			if (ft_write_two(ft_write_test(tab, ft_line_assign(i), 6, '4'), \
			ft_write_test(tab, ft_line_assign(j), 0, '3')) == 1)
			{
				ft_write(tab, ft_line_assign(i), 6, '4');
				ft_write(tab, ft_line_assign(j), 0, '3');
			}
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
			{
				if (ft_write_two(ft_write_test(tab, 0, i, '2'), \
				ft_write_test(tab, 1, i, '1')) == 1)
				{
					ft_write(tab, 0, i, '2');
					ft_write(tab, 1, i, '1');
				}
			}
			if (7 <= i && i <= 13 && (tab[ft_line_assign(i)][2] == '3') \
			&& (tab[ft_line_assign(i)][0] == '4'))
			{
				if (ft_write_two(ft_write_test(tab, \
				3, ft_column_assign(i), '2'), \
				ft_write_test(tab, 2, ft_column_assign(i), '1')) == 1)
				{
					ft_write(tab, 3, ft_column_assign(i), '2');
					ft_write(tab, 2, ft_column_assign(i), '1');
				}
			}
			if (14 <= i && i <= 20 && tab[ft_line_assign(i)][0] == '4'\
			&& tab[ft_line_assign(i)][2] == '3')
			{
				if (ft_write_two(ft_write_test(tab, 6, ft_line_assign(i), \
				'2'), ft_write_test(tab, 4, ft_line_assign(i), '1')) == 1)
				{
					ft_write(tab, 6, ft_line_assign(i), '2' );
					ft_write(tab, 4, ft_line_assign(i), '1' );
				}
			}
			if (21 <= i && i <= 27 && tab[ft_line_assign(i)][4] == '3' \
			&& tab[ft_line_assign(i)][6] == '4')
			{
				if (ft_write_two(ft_write_test(tab, ft_line_assign(i), \
				0, '2'), ft_write_test(tab, ft_line_assign(i), 2, '1')) == 1)
				{
					ft_write(tab, ft_line_assign(i), 0, '2');
					ft_write(tab, ft_line_assign(i), 2, '1');
				}
			}
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
				ft_write(tab, ft_line_assign(i), 0, '4');
			if (24 <= i && i <= 30)
				ft_write(tab, ft_line_assign(i), 6, '4');
		}
		i++;
	}
}

void	ft_cond_second(char **tab, char *param)
{
	int	i;

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

void	ft_cond_sixth(char **tab, char nb)
{
	int	i;
	int	t;
	int	c;
	int	raw[4] = {'0', '0', '0', '0'};
	int	col[4] = {'0', '0', '0', '0'};
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
				col[i / 2] = '1';
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
