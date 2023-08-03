/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_mana.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:13:53 by lboiteux          #+#    #+#             */
/*   Updated: 2023/07/23 16:04:28 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_cond_second(char **tab, char *param);
void	ft_cond_fifth(char **tab, char *param);
void	ft_cond_first(char **tab, char *param);
void	ft_cond_fourth(char **tab, char *param);
void	ft_cond_sixth(char **tab, char nb);
void	ft_fill_blanks(char **tab);
void	ft_write_tab(char **tab);
void	ft_cond_third(char **tab, char *param);

void	ft_tab_mana(char *input)
{
	char	*line1;
	char	*line2;
	char	*line3;
	char	*line4;
	char	**tab;

	line1 = (char [7]){'0', ' ', '0', ' ', '0', ' ', '0'};
	line2 = (char [7]){'0', ' ', '0', ' ', '0', ' ', '0'};
	line3 = (char [7]){'0', ' ', '0', ' ', '0', ' ', '0'};
	line4 = (char [7]){'0', ' ', '0', ' ', '0', ' ', '0'};
	tab = (char *[4]){line1, line2, line3, line4};
	ft_cond_second(tab, input);
	ft_cond_fifth(tab, input);
	ft_cond_first(tab, input);
	ft_cond_fourth(tab, input);
	ft_cond_sixth(tab, '4');
	ft_fill_blanks(tab);
	ft_cond_third(tab, input);
	ft_fill_blanks(tab);
	ft_write_tab(tab);
}
