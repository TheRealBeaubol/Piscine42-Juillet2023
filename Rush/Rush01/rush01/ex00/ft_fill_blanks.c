/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_blanks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarinc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:14:40 by mamarinc          #+#    #+#             */
/*   Updated: 2023/07/23 15:21:21 by mamarinc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_blanks_line_first(char **tab)
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

void	ft_fill_blanks_line_second(char **tab)
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

void	ft_fill_blanks_column_first(char **tab)
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

void	ft_fill_blanks_column_second(char **tab)
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
	ft_fill_blanks_line_first(tab);
	ft_fill_blanks_line_second(tab);
	ft_fill_blanks_column_first(tab);
	ft_fill_blanks_column_second(tab);
}
