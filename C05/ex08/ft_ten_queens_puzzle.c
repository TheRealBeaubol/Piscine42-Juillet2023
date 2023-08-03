/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 00:34:38 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/25 00:34:39 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_queens_test(int tab[10], int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (tab[i] == y || tab[i] + i == x + y || i - tab[i] == x - y)
			return (0);
		i++;
	}
	return (1);
}

void	ft_queens_bis(int tab[10], int *solut, int position)
{
	int	i;
	int	j;

	if (position == 10)
	{
		*solut = *solut + 1;
		j = -1;
		while (++j < 10)
		{
			ft_putchar(tab[j] + 48);
		}
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (ft_queens_test(tab, position, i) == 1)
			{
				tab[position] = i;
				ft_queens_bis(tab, solut, position + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	i;
	int	solut;

	i = 0;
	while (i < 10)
	{
		tab[i] = -1;
		i++;
	}
	solut = 0;
	ft_queens_bis(tab, &solut, 0);
	return (solut);
}
