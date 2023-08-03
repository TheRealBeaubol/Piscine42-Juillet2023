/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:18:01 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/18 14:18:03 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	n;

	n = 0;
	while (str[n] != '\0')
		++n;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j] && size != 0 && i + j < size - 1)
	{
		dest[j + i] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = 0;
	j = ft_strlen(src);
	return (i + j);
}
