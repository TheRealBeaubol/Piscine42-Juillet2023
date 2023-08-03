/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:51:32 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/13 16:51:35 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tpm;

	tpm = *a;
	*a = *b;
	*b = tpm;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	start1;
	int	start2;

	start1 = 0;
	while (start1 < size - 1)
	{
		start2 = start1 + 1;
		while (start2 < size)
		{
			if (tab[start1] > tab[start2])
				ft_swap(&tab[start1], &tab[start2]);
			start2++;
		}
		start1++;
	}
}
