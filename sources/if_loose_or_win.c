/*
** EPITECH PROJECT, 2018
** if_lose_or_win.c
** File description:
** if_lose_or_win.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

int if_player_one_loose(my_struct *pstruct)
{
	display_map1(pstruct);
	display_map1bis(pstruct);
	my_putstr("\nEnemy won\n");
	return (1);
}

int if_player_one_won(my_struct *pstruct)
{
	display_map1(pstruct);
	display_map1bis(pstruct);
	my_putstr("\nI won\n");
	return (0);
}

int if_player_two_loose(my_struct *pstruct)
{
	display_map2(pstruct);
	display_map2bis(pstruct);
	my_putstr("\nEnemy won\n");
	return (1);
}

int if_player_two_won(my_struct *pstruct)
{
	display_map2(pstruct);
	display_map2bis(pstruct);
	my_putstr("\nI won\n");
	return (0);
}
