/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:28:32 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/13 15:28:34 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tpm;

	tpm = *a;
	*a = *b;
	*b = tpm;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;

	end = size;
	start = 0;
	if (size % 2 == 0)
	{
		while (end > (size / 2))
		{
			ft_swap(&tab[start], &tab[end - 1]);
			--end;
			++start;
		}
	}
	else
	{
		while (end > ((size / 2) + 1))
		{
			ft_swap(&tab[start], &tab[end - 1]);
			--end;
			++start;
		}
	}
}
