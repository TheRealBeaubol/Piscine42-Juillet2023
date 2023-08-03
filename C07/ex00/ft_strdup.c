/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:22:59 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/24 17:23:00 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = malloc((ft_strlen(src) + 1) * (sizeof(char)));
	if (cpy == 0)
		return (cpy);
	while (src[i] != 0)
	{
		cpy[i] = src[i];
		++i;
	}
	cpy[i] = '\0';
	return (cpy);
}
