/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:50:27 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/17 13:50:28 by lboiteux         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((i < size) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	if (size == i)
		dest[i -1] = 0;
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}
