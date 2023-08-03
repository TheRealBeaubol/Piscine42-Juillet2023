/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:13:00 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/18 15:13:01 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	stock;
	int	signe;

	signe = 1;
	i = 0;
	stock = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		stock = (stock * 10) + (str[i] - 48);
		i++;
	}
	return (stock * signe);
}
