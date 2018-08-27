/*
** EPITECH PROJECT, 2018
** fill_map.c
** File description:
** fill_map.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

void fill_map(my_struct *pstruct, int ac)
{
	pstruct->ac = ac;
	pstruct->map_game1 = init_map();
	pstruct->map_game1bis = init_map();
	pstruct->map_game2 = init_map();
	pstruct->map_game2bis = init_map();
}
