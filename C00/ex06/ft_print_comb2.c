/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:53:58 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/12 13:54:01 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int c)
{
	char	a;

	a = (c / 10) + '0';
	write (1, &a, 1);
	a = (c % 10) + '0';
	write (1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{	
			ft_write (a);
			write (1, " ", 1);
			ft_write (b);
			if (a != 98 || b != 99)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
