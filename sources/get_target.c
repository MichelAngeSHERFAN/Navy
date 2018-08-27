/*
** EPITECH PROJECT, 2018
** get_target.c
** File description:
** get_target.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

int get_target(my_struct *pstruct)
{
	int ret = 0;

	pstruct->target_test = NULL;
	my_putstr("attack: ");
	pstruct->target_test = get_next_line2();
	if ((ret = verif_target(pstruct)) != 0)
		return (ret);
	return (0);
}
