/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_line_column.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchagrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:10:33 by vchagrel          #+#    #+#             */
/*   Updated: 2023/07/23 15:12:18 by vchagrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_line_assign(char c)
{
	int	index;

	index = 0;
	if (c == 16 || c == 24)
		index = 0;
	if (c == 18 || c == 26)
		index = 1;
	if (c == 20 || c == 28)
		index = 2;
	if (c == 22 || c == 30)
		index = 3;
	return (index);
}

int	ft_column_assign(char c)
{
	int	index;

	index = 0;
	if (c == 0 || c == 8)
		index = 0;
	if (c == 2 || c == 10)
		index = 2;
	if (c == 4 || c == 12)
		index = 4;
	if (c == 6 || c == 14)
		index = 6;
	return (index);
}
