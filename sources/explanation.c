/*
** EPITECH PROJECT, 2018
** explanation.c
** File description:
** explanation.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

void explanation(void)
{
	my_putstr("USAGE\n     ./navy [first_player_pid] navy_positions\n"
		  "DESCRIPTION\n     first_player_pid:  only for the 2nd player"
		  ".  pid of the first player.\n     navy_positions:  file "
		  "representing the positions of the ships.\n");
}
