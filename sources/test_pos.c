/*
** EPITECH PROJECT, 2018
** test_pos.c
** File description:
** test_pos.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

int test(my_struct *pstruct)
{
	int i = 0;

	while (pstruct->verif_pos[i] != NULL) {
		if (pstruct->verif_pos[0][0] != '2' ||
		    pstruct->verif_pos[1][0] != '3' ||
		    pstruct->verif_pos[2][0] != '4' ||
		    pstruct->verif_pos[3][0] != '5')
			return (-1);
		if ((test2(pstruct, i) == -1) || (test3(pstruct, i) == -1) ||
		    (test4(pstruct, i) == -1))
			return (-1);
		i++;
	}
	return (0);
}

int test4(my_struct *pstruct, int i)
{
	if (pstruct->verif_pos[i][6] == pstruct->verif_pos[i][3])
		if (pstruct->verif_pos[i][0] - 48 !=
		    (pstruct->verif_pos[i][5] - pstruct->verif_pos[i][2] + 1))
			return (-1);
	if (pstruct->verif_pos[i][5] == pstruct->verif_pos[i][2])
		if (pstruct->verif_pos[i][0] - 48 !=
		    (pstruct->verif_pos[i][6] - pstruct->verif_pos[i][3] + 1))
			return (-1);
	if (my_strlen(pstruct->verif_pos[i]) != 7)
		return (-1);
	return (0);
}

int test3(my_struct *pstruct, int i)
{
	if ((pstruct->verif_pos[i][2] != pstruct->verif_pos[i][5]) &&
	    (pstruct->verif_pos[i][3] != pstruct->verif_pos[i][6]))
		return (-1);
	if (pstruct->verif_pos[i][2] < 65 || pstruct->verif_pos[i][2] > 72 ||
	    pstruct->verif_pos[i][5] < 65 || pstruct->verif_pos[i][5] > 72)
		return (-1);
	if (pstruct->verif_pos[i][1] != ':' || pstruct->verif_pos[i][4] != ':')
		return (-1);
	return (0);
}

int test2(my_struct *pstruct, int i)
{
	if (pstruct->verif_pos[i][3] < 49 || pstruct->verif_pos[i][3] > 56 ||
	    pstruct->verif_pos[i][6] < 49 || pstruct->verif_pos[i][6] < 49)
		return (-1);
	if (pstruct->verif_pos[i][0] < 50 || pstruct->verif_pos[i][0] > 53)
		return (-1);
	return (0);
}

int count_boats(char **map)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while (map[i] != NULL) {
		while (map[i][j] != '\0') {
			counter = map[i][j] != '.' && map[i][j] != 'o' &&
				map[i][j] != 'x' ? counter + 1 : counter;
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}
