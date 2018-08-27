/*
** EPITECH PROJECT, 2018
** count.c
** File description:
** count.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

int count_x_map_one(my_struct *pstruct)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while (pstruct->map_game1[i] != NULL) {
		while (pstruct->map_game1[i][j] != '\0') {
			counter = pstruct->map_game1[i][j] == 'x' ?
				counter + 1 : counter;
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}

int count_x_map_onebis(my_struct *pstruct)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while (pstruct->map_game1bis[i] != NULL) {
		while (pstruct->map_game1bis[i][j] != '\0') {
			counter = pstruct->map_game1bis[i][j] == 'x' ?
				counter + 1 : counter;
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}

int count_x_map_two(my_struct *pstruct)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while (pstruct->map_game2[i] != NULL) {
		while (pstruct->map_game2[i][j] != '\0') {
			counter = pstruct->map_game2[i][j] == 'x' ?
				counter + 1 : counter;
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}

int count_x_map_twobis(my_struct *pstruct)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while (pstruct->map_game2bis[i] != NULL) {
		while (pstruct->map_game2bis[i][j] != '\0') {
			counter = pstruct->map_game2bis[i][j] == 'x' ?
				counter + 1 : counter;
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}
