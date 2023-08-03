/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:01:18 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/20 18:01:20 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		++n;
	return (n);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i <= argc - 1)
	{
		write(1, argv[i], ft_strlen (argv[i]));
		write(1, "\n", 1);
		i++;
	}
}
