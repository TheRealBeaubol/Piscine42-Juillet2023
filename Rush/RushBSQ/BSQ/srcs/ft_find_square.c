/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhervoch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 06:43:11 by mhervoch          #+#    #+#             */
/*   Updated: 2023/08/02 14:17:52 by mhervoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushbsq.h"
#include "../srcs/utils/utils.h"

int	ft_get_square_size(char **map, t_info_carre *temp)
{
	while (ft_valid_square_x(map, temp) == 1 && \
	ft_valid_square_y(map, temp) == 1)
		temp->taille += 1;
	return (1);
}

void	ft_write_new_map(char **map, t_info_carre *best)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if ((j >= best->x && j < (best->x + best->taille)) \
			&& (i >= best->y && i < (best->y + best->taille)))
				write(1, "x", 1);
			else
				write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_place(char **map, int len_map, int len_line, \
		t_info_carre *info_carre)
{
	t_info_carre	*best;
	t_info_carre	*temp;

	best = malloc(sizeof(t_info_carre));
	temp = malloc(sizeof(t_info_carre));
	temp->y = 0;
	temp->taille = 1;
	best->x = 0;
	best->y = 0;
	best->taille = 0;
	while (temp->y < len_map - best->taille)
	{
		temp->x = 0;
		while (temp->x < len_line - best->taille)
		{
			if (ft_get_square_size(map, info_carre))
			{
				if (best->taille < temp->taille)
				{
					best->x = temp->x;
					best->y = temp->y;
					best->taille = temp->taille;
					temp->taille = 0;
				}
			}
			temp->x++;
		}
		temp->y++;
	}
	ft_write_new_map(&map[1], info_carre);
	free(temp);
	free(best);
}
