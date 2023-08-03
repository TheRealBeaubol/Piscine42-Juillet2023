/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:14:58 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/31 18:46:19 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_n_word_size(char *src, char sep)
{
	int	size;

	size = 0;
	while (*(src + size) != '\0' && *(src + size) != sep)
		size++;
	return (size);
}

int	ft_count_words(char *str, char sep)
{
	int	i;
	int	wc;

	i = 1;
	wc = 0;
	if (*str != sep)
		wc++;
	while (str[i])
	{
		if (*(str + i - 1) == sep)
			if (*str != sep)
				wc++;
		i++;
	}	
	return (wc);
}

char	**ft_split(char *str, char sep)
{
	char	**split;
	int		wsize;
	int		i;
	int		wc;

	i = -1;
	wsize = 0;
	if (!str || !sep)
		return (NULL);
	wc = ft_count_words(str, sep);
	split = malloc(sizeof(char *) * (wc + 1));
	if (split == NULL)
		return (NULL);
	while (++i < wc)
	{
		while (wsize-- > 0 || *str == sep)
			str++;
		wsize = ft_n_word_size(str, sep);
		split[i] = malloc(sizeof(char) * (wsize + 1));
		if (split[i] == NULL)
			return (NULL);
		ft_strncpy(split[i], str, wsize);
	}
	split[i] = 0;
	return (split);
}
