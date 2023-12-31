/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 22:40:32 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/19 22:40:34 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	cpt;
	int	res;

	res = 1;
	cpt = 0;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (cpt != power)
	{
		res = res * nb;
		cpt++;
	}
	return (res);
}
