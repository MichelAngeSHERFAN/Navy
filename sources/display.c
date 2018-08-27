/*
** EPITECH PROJECT, 2018
** display.c
** File description:
** display.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

char **init_map(void)
{
	int i = 0;
	int j = 0;
	char **tab = malloc(sizeof(char *) * (8 + 1));

	while (i < 8) {
		tab[i] = malloc(sizeof(char) * (8 + 1));
		while (j < 8) {
			tab[i][j] = '.';
			j++;
		}
		tab[i][j] = '\0';
		j = 0;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int display_map1(my_struct *pstruct)
{
	int k = 0;
	int j = 0;
	int n = '1';

	my_putstr("my positions:\n |A B C D E F G H\n-+---------------\n");
	while (pstruct->map_game1[k] != NULL) {
		my_putchar(n);
		my_putchar('|');
		n++;
		while (j < 8) {
			my_putchar(pstruct->map_game1[k][j]);
			my_putchar(' ');
			j++;
		}
		my_putchar('\n');
		j = 0;
		k++;
	}
	my_putchar('\n');
	return (0);
}

int display_map1bis(my_struct *pstruct)
{
	int k = 0;
	int j = 0;
	int n = '1';

	my_putstr("enemy's positions:\n |A B C D E F G H\n-+---------------\n");
	while (pstruct->map_game1bis[k] != NULL) {
		my_putchar(n);
		my_putchar('|');
		n++;
		while (j < 8) {
			my_putchar(pstruct->map_game1bis[k][j]);
			my_putchar(' ');
			j++;
		}
		my_putchar('\n');
		j = 0;
		k++;
	}
	my_putchar('\n');
	return (0);
}

int display_map2(my_struct *pstruct)
{
	int k = 0;
	int j = 0;
	int n = '1';

	my_putstr("my positions:\n |A B C D E F G H\n-+---------------\n");
	while (pstruct->map_game2[k] != NULL) {
		my_putchar(n);
		my_putchar('|');
		n++;
		while (j < 8) {
			my_putchar(pstruct->map_game2[k][j]);
			my_putchar(' ');
			j++;
		}
		my_putchar('\n');
		j = 0;
		k++;
	}
	my_putchar('\n');
	return (0);
}

int display_map2bis(my_struct *pstruct)
{
	int k = 0;
	int j = 0;
	int n = '1';

	my_putstr("enemy's positions:\n |A B C D E F G H\n-+---------------\n");
	while (pstruct->map_game2bis[k] != NULL) {
		my_putchar(n);
		my_putchar('|');
		n++;
		while (j < 8) {
			my_putchar(pstruct->map_game2bis[k][j]);
			my_putchar(' ');
			j++;
		}
		my_putchar('\n');
		j = 0;
		k++;
	}
	my_putchar('\n');
	return (0);
}
