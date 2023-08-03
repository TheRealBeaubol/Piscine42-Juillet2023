/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:45:14 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/25 17:45:15 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if ((base[i] >= 9 && base[i] <= 13) || (base[i] == 32))
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

int	ft_intlen(int nb, char *base)
{
	int	n;

	if (nb < 0)
	{
		n = 2;
		while (nb < (ft_strlen(base) * -1))
		{
			nb /= ft_strlen(base);
			n++;
		}
	}
	else
	{
		n = 1;
		while (nb > ft_strlen(base))
		{
			nb /= ft_strlen(base);
			n++;
		}
	}
	return (n);
}

int	position_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
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
	while (str[i] && position_in_base(base, str[i]) != -1)
	{
		stock = stock * ft_strlen(base) + position_in_base(base, str[i]);
		i++;
	}
	return (stock * signe);
}
