/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 02:15:58 by kiroussa          #+#    #+#             */
/*   Updated: 2023/07/25 11:41:23 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <signal.h>
#include <malloc.h>

char	**ft_split(char *str, char *charset);
int		ft_count_words(char *str, char *charset);

void	freeTab(char **tab)
{
	if (tab == NULL) {
		puts("tab is NULL");
		return;
	}
	for (int i = 0; tab[i] != NULL; ++i)
		free(tab[i]);
	free(tab);
}

void	check(int condition)
{
	if (condition)
		printf("OK\n");
	else
		printf(">>> KO\n");
}

void	mcheck(void *p, size_t required_size)
{
	void	*p2;

	p2 = malloc(required_size);
	if (malloc_usable_size(p) == malloc_usable_size(p2))
		printf("OK\n");
	else
		printf("KO -> malloc\n");
	free(p2);
}

int	main2(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	return (0);
}

void sigsegv(int signum)
{
	(void)signum;
	puts("segfault");
	exit(0);
}

int	main(void)
{
	char	**tab;

	signal(SIGSEGV, sigsegv);
	tab = ft_split("  tripouille  42  ", " ");
	mcheck(tab, sizeof(char *) * 3);
	check(!strcmp(tab[0], "tripouille"));
	mcheck(tab[0], strlen("tripouille") + 1);
	check(!strcmp(tab[1], "42"));
	mcheck(tab[1], strlen("42") + 1);
	check(tab[2] == NULL);
	freeTab(tab);
	tab = ft_split("chinimala", " ");
	mcheck(tab, sizeof(char *) * 2);
	check(!strcmp(tab[0], "chinimala"));
	check(tab[1] == NULL);	
	freeTab(tab);
	tab = ft_split("", " ");
	mcheck(tab, sizeof(char *) * 1);
	check(tab[0] == NULL);
	freeTab(tab);
	char * splitme = strdup("Tripouille");
	tab = ft_split(splitme, " ");
	mcheck(tab, sizeof(char *) * 2);
	check(!strcmp(tab[0], "Tripouille"));
	check(tab[1] == NULL);
	free(splitme); freeTab(tab);
	tab = ft_split("  tripouille  42  ", " 42");
	mcheck(tab, sizeof(char *) * 1);
	check(!strcmp(tab[0], "tripouille"));
	check(tab[1] == NULL);
	freeTab(tab);
	tab = ft_split("", "");
	mcheck(tab, sizeof(char *) * 1);
	check(tab[0] == NULL);
	freeTab(tab);
	tab = ft_split("", " ");
	mcheck(tab, sizeof(char *) * 1);
	check(tab[0] == NULL);
	freeTab(tab);
	tab = ft_split("Tripouille", " ");
	mcheck(tab, sizeof(char *) * 2);
	check(!strcmp(tab[0], "Tripouille"));
	check(tab[1] == NULL);
	freeTab(tab);
	tab = ft_split("Tripouille ", " ");
	mcheck(tab, sizeof(char *) * 2);
	check(!strcmp(tab[0], "Tripouille"));
	check(tab[1] == NULL);
	freeTab(tab);
	tab = ft_split(" Tripouille", " ");
	mcheck(tab, sizeof(char *) * 2);
	check(!strcmp(tab[0], "Tripouille"));
	check(tab[1] == NULL);
	freeTab(tab);
	tab = ft_split(" Tripouille ", " ");
	mcheck(tab, sizeof(char *) * 2);
	check(!strcmp(tab[0], "Tripouille"));
	mcheck(tab[0], strlen("Tripouille") + 1);
	check(tab[1] == NULL);
	freeTab(tab);
	tab = ft_split("--1-2--3---4----5-----42", "-");
	//puts("le teste");
	/*for (int i = 0; i < 6; i++)
		printf("tab[%d] = %s\n", i, tab[i]);*/
	mcheck(tab, sizeof(char *) * 7);
	check(!strcmp(tab[0], "1"));
	mcheck(tab[0], strlen("1") + 1);
	check(!strcmp(tab[1], "2"));
	mcheck(tab[1], strlen("2") + 1);
	check(!strcmp(tab[2], "3"));
	mcheck(tab[2], strlen("3") + 1);
	check(!strcmp(tab[3], "4"));
	mcheck(tab[3], strlen("4") + 1);
	check(!strcmp(tab[4], "5"));
	mcheck(tab[4], strlen("5") + 1);
	check(!strcmp(tab[5], "42"));
	mcheck(tab[5], strlen("42") + 1);
	check(tab[6] == NULL);
	freeTab(tab);
	//puts("seg?");
	tab = ft_split("Salut uwu", NULL);
	mcheck(tab, sizeof(char *) * 2);
	check(!strcmp(tab[0], "Salut uwu"));
	check(tab[1] == NULL);
	freeTab(tab);
	tab = ft_split(NULL, " ");
	mcheck(tab, sizeof(char *) * 1);
	check(tab[0] == NULL);
	freeTab(tab);
	printf("Finished!\n");
	return (0);
}
