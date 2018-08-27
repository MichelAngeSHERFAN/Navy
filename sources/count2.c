/*
** EPITECH PROJECT, 2018
** count2.c
** File description:
** count2.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

int count1(my_struct *pstruct)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while (pstruct->map_game1[i] != NULL) {
		while (pstruct->map_game1[i][j] != '\0') {
			counter = pstruct->map_game1[i][j] == '2' ||
				pstruct->map_game1[i][j] == '3' ||
				pstruct->map_game1[i][j] == '4' ||
				pstruct->map_game1[i][j] == '5' ?
				counter + 1 : counter;
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}

int count2(my_struct *pstruct)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while (pstruct->map_game2[i] != NULL) {
		while (pstruct->map_game2[i][j] != '\0') {
			counter = pstruct->map_game2[i][j] == '2' ||
				pstruct->map_game2[i][j] == '3' ||
				pstruct->map_game2[i][j] == '4' ||
				pstruct->map_game2[i][j] == '5' ?
				counter + 1 : counter;
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}
