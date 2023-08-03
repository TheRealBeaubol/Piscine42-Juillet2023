/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:01:03 by rmarion           #+#    #+#             */
/*   Updated: 2023/07/23 16:21:19 by rmarion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_error(char *param, int argc);
int		ft_check_input_error(char *input);
void	ft_tab_mana(char *input);

int	main(int argc, char **argv)
{
	if (ft_error(argv[1], argc) == 0)
		return (0);
	if (ft_check_input_error(argv[1]) == 0)
		return (0);
	ft_tab_mana(argv[1]);
	return (0);
}
