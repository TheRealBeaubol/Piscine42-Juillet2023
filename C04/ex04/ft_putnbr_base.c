/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:20:37 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/18 19:20:38 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == 0 || base[1] == 0)
		return (1);
	while (base[i] != 0)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if (base[i] < 32 || base[i] > 126)
			return (1);
		while (base[j] != 0)
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		++n;
	return (n);
}

void	ft_putnbr_base_rec(long int nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr >= ft_strlen(base))
		ft_putnbr_base_rec(nbr / ft_strlen(base), base);
	write(1, &base[nbr % ft_strlen(base)], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;

	nb = (long int)nbr;
	if (ft_error(base))
		return ;
	ft_putnbr_base_rec(nb, base);
}
