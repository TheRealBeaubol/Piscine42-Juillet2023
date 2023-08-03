/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:06:16 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/16 14:07:06 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	j;

	j = 0;
	ft_strlowcase(str);
	if ('a' <= str[j] && str[j] <= 'z')
		str[j] = str[j] - 32;
	while (str[j + 1] != 0)
	{
		if (!(('a' <= str[j] && str[j] <= 'z')
				|| ('A' <= str[j] && str[j] <= 'Z')
				|| ('0' <= str[j] && str[j] <= '9')))
			if ('a' <= str[j + 1] && str[j + 1] <= 'z')
				str[j + 1] = str[j + 1] - 32;
		j++;
	}
	return (str);
}
