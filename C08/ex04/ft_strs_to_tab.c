/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 08:08:11 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/30 08:08:12 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	if (ac > 0)
	{
		while (i < ac)
		{
			tab[i].size = ft_strlen(av[i]);
			tab[i].str = av[i];
			tab[i].copy = ft_strdup(tab[i].str);
			i++;
		}
	}
	tab[i].str = 0;
	return (tab);
}
