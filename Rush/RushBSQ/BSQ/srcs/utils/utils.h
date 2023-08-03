/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 07:19:24 by lboiteux          #+#    #+#             */
/*   Updated: 2023/08/01 07:19:26 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "../../includes/rushbsq.h"

char	**ft_split(char *str, char sep);
void	*ft_realloc(void *ptr, int new_size, int size);
int		ft_strlen(char *str);
int		ft_valid_square_x(char **map, t_info_carre *temp);
int		ft_valid_square_y(char **map, t_info_carre *temp);
int		len_tab(char **tab);

#endif
