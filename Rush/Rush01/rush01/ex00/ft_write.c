/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:06:39 by rmarion           #+#    #+#             */
/*   Updated: 2023/07/23 15:08:03 by rmarion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_write(char **tab, int i1, int i2, char write)
{
	if (tab[i1][i2] == '0')
		tab[i1][i2] = write;
}

int	ft_write_two(int i, int j)
{
	if (i == 1 && i == j)
		return (1);
}

int	ft_write_test(char **tab, int i1, int i2, char write)
{
	if (tab[i1][i2] == '0')
		return (1);
}
