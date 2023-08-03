/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushbsq.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 07:21:16 by lboiteux          #+#    #+#             */
/*   Updated: 2023/08/02 06:45:07 by mhervoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHBSQ_H
# define RUSHBSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_info_carre
{
	int	taille;
	int	x;
	int	y;
}	t_info_carre;

char	**ft_split_file(int file_d);
void	ft_place(char **map, int len_map, int len_line, \
	t_info_carre *info_carre);

#endif
