/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:57:20 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/16 19:57:22 by lboiteux         ###   ########.fr       */
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
			if ((x_c == 1 && y_c == 1) || (x_c == x && y_c == 1)
				|| (x_c == 1 && y_c == y) || (x_c == x && y_c == y))
				ft_putchar('o');
			else if ((y_c == 1 || y_c == y) && (x_c > 1 && x_c < x))
				ft_putchar('-');
			else if ((x_c == 1 || x_c == x) && (y_c > 1 && y_c < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			x_c++;
		}
		y_c++;
		ft_putchar('\n');
	}
}
