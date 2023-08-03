/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 07:20:17 by lboiteux          #+#    #+#             */
/*   Updated: 2023/08/01 09:40:40 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/utils.h"
#include "../includes/rushbsq.h"

char	**ft_split_file(int file_d)
{
	int		cpt;
	char	c;
	char	*str;
	char	*old_str;
	char	**split;

	cpt = read(file_d, &c, 1);
	if (cpt < 0)
		return (NULL);
	str = malloc((cpt + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	*str = c;
	split = NULL;
	while (read(file_d, &c, 1) > 0)
	{
		old_str = str;
		str = ft_realloc(old_str, cpt + 2, cpt);
		free(old_str);
		str[cpt] = c;
		if (str[cpt - 1] == '\n' && str[cpt] == '\n')
			return (NULL);
		cpt++;
	}
	str[cpt] = '\0';
	split = ft_split(str, '\n');
	free(str);
	return (split);
}
