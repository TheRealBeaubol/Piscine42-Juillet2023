/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:45:07 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/25 17:45:08 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);
int	ft_error(char *base);
int	ft_intlen(int nb, char *base);

char	*ft_strcat(char *dest, char src)
{
	int	i;

	i = 0;
	while (dest[i] != 0)
		i++;
	dest[i] = src;
	dest[i + 1] = 0;
	return (dest);
}

char	*ft_putnbr_base_rec(long int nbr, char *base, char *res)
{
	if (nbr >= ft_strlen(base))
		ft_putnbr_base_rec(nbr / ft_strlen(base), base, res);
	ft_strcat(res, base[nbr % ft_strlen(base)]);
	return (res);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	char		*res;

	nb = (long int)nbr;
	res = malloc((ft_intlen(nbr, base) + 1) * sizeof(char));
	*res = 0;
	if (nb < 0)
	{
		ft_strcat(res, '-');
		nb = nb * -1;
	}
	return (ft_putnbr_base_rec(nb, base, res));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;

	if (ft_error(base_from))
		return (NULL);
	if (ft_error(base_to))
		return (NULL);
	res = ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to);
	return (res);
}
