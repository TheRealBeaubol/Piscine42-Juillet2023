/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:19:56 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/24 20:19:58 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		++n;
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat;
	int		i;
	int		size_malloc;

	i = -1;
	size_malloc = 0;
	if (size == 0 || strs == NULL || sep == NULL)
	{
		cat = malloc(1 * sizeof(char));
		return (cat);
	}
	while (++i != size)
		size_malloc += ft_strlen(strs[i]) + ft_strlen(sep);
	size_malloc -= ft_strlen(sep);
	cat = malloc(size_malloc + 1 * sizeof(char));
	*cat = 0;
	i = -1;
	while (++i != (size - 1))
	{
		ft_strcat(cat, strs[i]);
		ft_strcat(cat, sep);
	}
	ft_strcat(cat, strs[i]);
	return (cat);
}
