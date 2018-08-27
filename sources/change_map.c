/*
** EPITECH PROJECT, 2018
** change_map.c
** File description:
** change_map.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

int change_map2(my_struct *pstruct)
{
	int i = pstruct->line - 1;
	int j = pstruct->column - 1;

	if (breakk[7] == 1) {
		my_putchar(j + 65);
		my_put_nbr(i + 1);
		my_putstr(": hit\n\n");
		pstruct->map_game2bis[i][j] = 'x';
	} else if (breakk[7] == 2) {
		my_putchar(j + 65);
		my_put_nbr(i + 1);
		my_putstr(": missed\n\n");
		pstruct->map_game2bis[i][j] =
			pstruct->map_game2bis[i][j] == 'x' ? 'x' : 'o';
	}
	return (0);
}

int change_map1(my_struct *pstruct)
{
	int i = pstruct->line - 1;
	int j = pstruct->column - 1;

	if (breakk[7] == 1) {
		my_putchar(j + 65);
		my_put_nbr(i + 1);
		my_putstr(": hit\n\n");
		pstruct->map_game1bis[i][j] = 'x';
	} else if (breakk[7] == 2) {
		my_putchar(j + 65);
		my_put_nbr(i + 1);
		my_putstr(": missed\n\n");
		pstruct->map_game1bis[i][j] =
			pstruct->map_game1bis[i][j] == 'x' ? 'x' : 'o';
	}
	return (0);
}

int check_map1(my_struct *pstruct)
{
	int i = breakk[4] - 1;
	int j = breakk[3] - 1 - 1;

	my_putchar(j + 65);
	my_put_nbr(i + 1);
	if (pstruct->map_game1[i][j] != '.' && pstruct->map_game1[i][j]
	    != 'x' && pstruct->map_game1[i][j] != 'o') {
		pstruct->map_game1[i][j] = 'x';
		my_putstr(":  hit\n\n");
		return (-1);
	} else if (pstruct->map_game1[i][j] == 'x') {
		my_putstr(":  missed\n\n");
		return (-2);
	} else {
		pstruct->map_game1[i][j] =
			pstruct->map_game1[i][j] == 'x' ? 'x' : 'o';
		my_putstr(":  missed\n\n");
		return (-2);
	}
}

int check_map2(my_struct *pstruct)
{
	int i = breakk[4] - 1;
	int j = breakk[3] - 1 - 1;

	my_putchar(j + 65);
	my_put_nbr(i + 1);
	if (pstruct->map_game2[i][j] != '.' && pstruct->map_game2[i][j] !=
	    'x' && pstruct->map_game2[i][j] != 'o') {
		pstruct->map_game2[i][j] = 'x';
		my_putstr(":  hit\n\n");
		return (-1);
	} else if (pstruct->map_game2[i][j] == 'x') {
		my_putstr(":  missed\n\n");
		return (-2);
	} else {
		pstruct->map_game2[i][j] =
			pstruct->map_game2[i][j] == 'x' ? 'x' : 'o';
		my_putstr(":  missed\n\n");
		return (-2);
	}
}
