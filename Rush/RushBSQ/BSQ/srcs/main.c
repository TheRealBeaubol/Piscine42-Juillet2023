/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:01:59 by lboiteux          #+#    #+#             */
/*   Updated: 2023/08/02 14:25:00 by mhervoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/rushbsq.h"
#include "utils/utils.h"

char	*find_to_find_char(char *tab);
int		check_char(char *str, char *to_find);
int		check_line_nb(char **tab);
int		ft_same_len_tab(char **tab);

char	**map_read(void)
{
	char	**map;
	char	*map_name;
	int		fd;

	map_name = "test";
	fd = open(map_name, O_RDONLY);
	if (fd < 0)
		write(2, "map error\n", 16);
	else
	{
		map = ft_split_file(fd);
	}
	return (map);
}

int	main(void)
{
	char			**map;
	int				x;
	int				i;
	t_info_carre	*info_carre;

	i = 1;
	info_carre = malloc(sizeof(t_info_carre));
	map = map_read();
	ft_same_len_tab(map);
	check_line_nb(map);
	x = 1;
	while (map[x])
	{
		check_char(map[x], find_to_find_char(map[0]));
		x++;
	}
	ft_place(map, len_tab(map), ft_strlen(map[i]), info_carre);
	free(info_carre);
	return (0);
}
