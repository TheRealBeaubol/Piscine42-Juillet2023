/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cond_third.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:10:21 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/23 18:10:23 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_write(char **tab, int i1, int i2, char write);

void	ft_cond_third(char **tab, char *param)
{
	int		i;
	char	line1[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	line2[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	line3[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	line4[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	char	*tb[4] = {line1, line2, line3, line4};
	char	test[7] = {'0', ' ', '0', ' ', '0', ' ', '0'};
	int		t;
	int		stocki;
	int		cpt;

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
			if (i == 1 || i % 2 != 0)
				test[i] = ' ';
			else
				test[i] = '0';
			i++;
		}
		t++;
	}
}
