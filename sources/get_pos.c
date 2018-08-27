/*
** EPITECH PROJECT, 2018
** get_pos.c
** File description:
** get_pos.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

int place_boats1(my_struct *pstruct, char *str)
{
	char **map_evo = pstruct->map_game1;
	int i = 0;

	if (str[3] < 49 || str[3] > 56 || str[6] < 49 || str[6] > 56 ||
	    str[2] < 65 || str[2] > 72 || str[5] < 65 || str[5] > 72)
		return (84);
	map_evo[str[3] - 48 - 1][str[2] - 65] = str[0];
	map_evo[str[6] - 48 - 1][str[5] - 65] = str[0];
	if (str[5] - str[2] != 0)
		while (i < (str[5] - str[2])) {
			map_evo[str[6] - 48 - 1][str[5] - 65 - i] = str[0];
			i++;
		}
	if (str[6] - str[3] != 0)
		while (i < (str[6] - str[3])) {
			map_evo[str[6] - 48 - 1 - i][str[5] - 65] = str[0];
			i++;
		}
	return (0);
}

int place_boats2(my_struct *pstruct, char *str)
{
	char **map_evo = pstruct->map_game2;
	int i = 0;

	if (str[3] < 49 || str[3] > 56 || str[6] < 49 || str[6] > 56 ||
	    str[2] < 65 || str[2] > 72 || str[5] < 65 || str[5] > 72)
		return (84);
	map_evo[str[3] - 48 - 1][str[2] - 65] = str[0];
	map_evo[str[6] - 48 - 1][str[5] - 65] = str[0];
	if (str[5] - str[2] != 0)
		while (i < (str[5] - str[2])) {
			map_evo[str[6] - 48 - 1][str[5] - 65 - i] = str[0];
			i++;
		}
	if (str[6] - str[3] != 0)
		while (i < (str[6] - str[3])) {
			map_evo[str[6] - 48 - 1 - i][str[5] - 65] = str[0];
			i++;
		}
	return (0);
}

int get_pos(my_struct *pstruct, char *pathname)
{
	int fd;
	char *str_pos;
	int i = 0;

	if ((fd = open(pathname, O_RDONLY)) == -1)
		return (84);
	fd = open(pathname, O_RDONLY);
	str_pos = get_next_line(fd);
	pstruct->verif_pos = malloc(sizeof(char *) * 16);
	get_pos2(pstruct, i, str_pos, fd);
	pstruct->verif_pos[i] = NULL;
	close(fd);
	return (0);
}

int get_pos2(my_struct *pstruct, int i, char *str_pos, int fd)
{
	int j = 0;
	int w = 0;

	while ((str_pos != NULL) && i < 4) {
		if (pstruct->ac == 2)
			place_boats1(pstruct, str_pos);
		if (pstruct->ac == 3)
			place_boats2(pstruct, str_pos);
		pstruct->verif_pos[i] = malloc(sizeof(char) * 100);
		for (; str_pos[w] != '\0'; j++, w++)
			pstruct->verif_pos[i][j] = str_pos[w];
		pstruct->verif_pos[i][j] = '\0';
		j = 0;
		w = 0;
		i++;
		str_pos = get_next_line(fd);
	}
	if (i < 4)
		return (84);
	return (0);
}

int pos_test(my_struct *pstruct, char *pathname)
{
	int fd;

	if ((fd = open(pathname, O_CREAT | O_RDONLY)) == -1)
		return (-1);
	if (test(pstruct) == -1)
		return (-1);
	if (pstruct->ac == 2 && count_boats(pstruct->map_game1) != 14)
		return (-1);
	if (pstruct->ac == 3 && count_boats(pstruct->map_game2) != 14)
		return (-1);
	return (0);
}
