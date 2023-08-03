/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input_error.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchagrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:52:11 by vchagrel          #+#    #+#             */
/*   Updated: 2023/07/23 14:33:00 by vchagrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	ft_check_input_second(char *param)
{
	int	i;

	i = 0;
	while (i != 30)
	{
		if (param[i] == '1')
		{
			if ((i < 7) || (i > 15 && i < 23))
			{
				if (param[i + 8] == '1')
					return (0);
			}
		}
		if (param[i] != '1')
		{
			if ((i < 7) || (i > 15 && i < 23))
			{
				if (param[i + 8] == '4')
					return (0);
			}
		}
		i++;
	}
	return (1);
}

int	ft_check_input_first(char *param)
{
	int	i;

	i = 0;
	while (i != 30)
	{
		if (param[i] == '4')
		{
			if ((i < 7) || (i > 15 && i < 23))
			{
				if (param[i + 8] != '1')
					return (0);
			}
		}
		if (param[i] == '3')
		{
			if ((i < 7) || (i > 15 && i < 23))
			{
				if (param[i + 8] == '3')
					return (0);
			}
		}
		i++;
	}
	return (1);
}

int	ft_check_input_error(char *param)
{
	if (ft_check_input_first(param) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (ft_check_input_second(param) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}
