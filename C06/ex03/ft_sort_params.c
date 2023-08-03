/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:11:40 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/20 18:11:41 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	while (*str != 0)
	{
		write(1, str, 1);
		++str;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tpm;

	tpm = *a;
	*a = *b;
	*b = tpm;
}

void	ft_sort(char **tab, char size)
{
	int	start1;
	int	start2;

	start1 = 1;
	while (start1 < size - 1)
	{
		start2 = start1 + 1;
		while (start2 < size)
		{
			if (ft_strcmp(tab[start1], tab[start2]) > 0)
				ft_swap(&tab[start1], &tab[start2]);
			start2++;
		}
		start1++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
