/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:27:09 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/16 18:27:10 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int	x_c;
	int	y_c;

	if (x <= 0 || y <= 0)
		return ;
	y_c = 1;
	while (y_c <= y)
	{
		x_c = 1;
		while (x_c <= x)
		{
			if (((x_c > 1 && x_c < x) && (y_c == 1 || y == y_c))
				|| ((y_c > 1 && y_c < y) && (x_c == 1 || x == x_c)))
				ft_putchar('*');
			else if (y_c == 1 && x_c == x || y_c == y && x_c == 1)
				ft_putchar('\\');
			else if (y_c == y && x_c == x || x_c == 1 && y_c == 1)
				ft_putchar('/');
			else
				ft_putchar(' ');
			x_c++;
		}
		y_c++;
		ft_putchar('\n');
	}
}
