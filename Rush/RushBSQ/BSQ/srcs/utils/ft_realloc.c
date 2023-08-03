/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 07:19:41 by lboiteux          #+#    #+#             */
/*   Updated: 2023/08/01 07:19:42 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_realloc(char *ptr, int new_size, int size)
{
	char	*new;
	int		i;	

	i = 0;
	if (ptr == NULL)
		return (NULL);
	new = malloc(new_size * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (size--)
	{
		new[i] = ptr[i];
		i++;
	}
	return (new);
}
