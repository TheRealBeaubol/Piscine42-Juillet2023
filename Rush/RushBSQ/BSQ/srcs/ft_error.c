/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 07:55:04 by lboiteux          #+#    #+#             */
/*   Updated: 2023/08/01 07:55:42 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushbsq.h"
#include "utils/utils.h"

char	*find_to_find_char(char *tab)
{
	char	*to_find;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(tab) - 3 ;
	to_find = malloc(4 * sizeof(char));
	while (tab[j] != 0)
	{
		to_find[i] = tab[j];
		j++;
		i++;
	}
	to_find[i] = 0;
	return (to_find);
}

int	check_char(char *str, char *to_find)
{
	int	i;
	int	j;

	while (*str != 0)
	{
		i = 0;
		j = 0;
		while (to_find[i] != 0)
		{
			if (*str == to_find[i])
				j = 1;
			i++;
		}
		if (j == 0)
		{
			write(2, "map error\n", 10);
			return (1);
		}
		str++;
	}
	return (0);
}

int	check_line_nb(char **tab)
{
	if (!tab[1])
	{
		write(2, "map error\n", 10);
		return (1);
	}
	else if (ft_strlen(tab[1]) == 0)
	{
		write(2, "map error\n", 10);
		return (1);
	}
	return (0);
}

int	ft_same_len_tab(char **tab)
{
	int	i;

	i = 1;
	while (tab[i + 1])
	{
		if (ft_strlen(tab[i]) != ft_strlen(tab[i + 1]))
		{
			write(2, "map error\n", 10);
			return (1);
		}
		i++;
	}
	return (0);
}
