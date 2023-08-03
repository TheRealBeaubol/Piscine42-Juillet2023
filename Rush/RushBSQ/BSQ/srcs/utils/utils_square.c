/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhervoch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:31:10 by mhervoch          #+#    #+#             */
/*   Updated: 2023/08/02 16:23:13 by mhervoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/rushbsq.h"
#include "utils.h"

int	ft_valid_square_x(char **map, t_info_carre *temp)
{
	int	i;
	int	j;

	i = temp->x;
	j = temp->taille - 1;
	while (i < temp->x + temp->taille)
	{
		if (map[j][i] == 'o')
			return (0);
		i++;
	}
	return (1);
}

int	ft_valid_square_y(char **map, t_info_carre *temp)
{
	int	i;
	int	j;

	i = temp->taille - 1;
	j = temp->y;
	while (j < temp->y + temp->taille)
	{
		if ((map[j][i]) == 'o')
			return (0);
		j++;
	}
	return (1);
}
