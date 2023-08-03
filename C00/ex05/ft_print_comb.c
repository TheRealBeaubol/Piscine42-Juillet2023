/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:44:36 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/12 10:44:38 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c, char *d)
{	
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, d, 2);
}

void	ft_write2(char a, char b, char c)
{	
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		b = '1';
		while (b <= '8')
		{
			c = '2';
			while (c <= '9')
			{
				if (c > b && b > a && a != '7')
					ft_write(a, b, c, ", ");
				else if (c > b && b > a && a == '7')
					ft_write2(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}	
}
