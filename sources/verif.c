/*
** EPITECH PROJECT, 2018
** verif_target.c
** File description:
** verif_target.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

int verif_target(my_struct *pstruct)
{
	if (pstruct->target_test == NULL)
		return (-1);
	if (pstruct->target_test[0] == 0)
		return (display_error1(pstruct));
	if (my_strlen(pstruct->target_test) != 2)
		return (display_error2(pstruct));
	return (verif_target2(pstruct));
}

int verif_target2(my_struct *pstruct)
{
	if (pstruct->target_test[0] < 'A' || pstruct->target_test[0] > 'H')
		return (display_error3(pstruct));
	pstruct->column = pstruct->target_test[0] - 65 + 1;
	pstruct->line = pstruct->target_test[1] - 48 - 1 + 1;
	if (pstruct->line < 1 || pstruct->line > 8) {
		my_putstr("wrong position\n");
		if (get_target(pstruct) == -1)
			return (-1);
		return (-2);
	}
	return (0);
}

int display_error1(my_struct *pstruct)
{
	if (get_target(pstruct) == -1)
		return (-1);
	return (-2);
}

int display_error2(my_struct *pstruct)
{
	my_putstr("wrong position\n");
	if (get_target(pstruct) == -1)
		return (-1);
	return (-2);
}

int display_error3(my_struct *pstruct)
{
	my_putstr("wrong position\n");
	if (get_target(pstruct) == -1)
		return (-1);
	return (-2);
}
