/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:06:59 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/21 00:07:02 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n, int *t, int position)
{
	int	indice;

	if (position == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	indice = 0;
	while (indice != n)
	{
		ft_putchar(t[indice] + '0');
		++indice;
	}
}

void	ft_print_combn_augment(int n, int *t)
{
	int	indice;
	int	maxi;

	indice = n - 1;
	maxi = 9;
	while (t[indice] == maxi)
	{
		indice--;
		maxi--;
	}
	t[indice]++;
	while (indice < n)
	{
		t[indice + 1] = t[indice] + 1;
		indice += 1;
	}
}

void	ft_print_combn(int n)
{
	int	t[10];
	int	indice;

	indice = 0;
	while (indice < n)
	{
		t[indice] = indice;
		indice++;
	}
	ft_print(n, t, 0);
	while (t[0] != 10 - n || t[n - 1] != 9)
	{
		if (t[n - 1] != 9)
			t[n - 1] += 1;
		else
			ft_print_combn_augment(n, t);
		ft_print(n, t, 1);
	}
}
