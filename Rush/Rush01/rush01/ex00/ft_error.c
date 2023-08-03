/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarinc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:55:48 by mamarinc          #+#    #+#             */
/*   Updated: 2023/07/23 14:30:21 by mamarinc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	ft_count_numbers(char *param)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (param[i] != '\0')
	{
		if (param[i] >= '1' && param[i] <= '4')
		{
			if (param[i + 1] == 32 || param[i + 1] == '\0')
				count++;
		}
		if ((param[i] == 32 && param[i + 1] == 32) || param[0] == 32)
			return (0);
		if (param[i] == 32 && param[i + 1] == '\0')
			return (0);
		if ((param[i] >= '1' && param[i] <= '4')
			&& (param[i + 1] >= '1' && param[i + 1] <= '4'))
			return (0);
		i++;
	}
	if (count != 16)
		return (0);
	return (1);
}

int	ft_error(char *param, int argc)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (param[i] != '\0')
	{
		if (!(param[i] >= '1' && param[i] <= '4') && param[i] != 32)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	if (ft_count_numbers(param) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}
