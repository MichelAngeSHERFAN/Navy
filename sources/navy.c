/*
** EPITECH PROJECT, 2018
** navy.c
** File description:
** navy.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

int player_one(my_struct *pstruct, char *pos1)
{
	if (get_pos(pstruct, pos1) == 84) {
		my_putstr("open failed corrupted file\n");
		return (84);
	}
	if (pos_test(pstruct, pos1) == -1) {
		my_putstr("open failed corrupted file\n");
		return (84);
	}
	first_connection1(pstruct);
	pstruct->pid2 = breakk[1];
	return (0);
}

int loop1(my_struct *pstruct)
{
	while (8) {
		display_map1(pstruct);
		display_map1bis(pstruct);
		if (get_target(pstruct) == -1)
			return (0);
		send_1(pstruct);
		receive_hit_or_missed_1(pstruct);
		if ((count_x_map_one(pstruct) == 14) || (count1(pstruct) == 0))
			return (if_player_one_loose(pstruct));
		if (count_x_map_onebis(pstruct) == 14)
			return (if_player_one_won(pstruct));
		receive_1();
		send_if_hit_or_missed_1(pstruct);
	}
}

int player_two(my_struct *pstruct, char *pid, char *pos2)
{
	if (get_pos(pstruct, pos2) == 84) {
		my_putstr("open failed corrupted file\n");
		return (84);
	}
	if (pos_test(pstruct, pos2) == -1) {
		my_putstr("open failed corrupted file\n");
		return (84);
	}
	if (first_connection2(my_getnbr(pid), pstruct) == -1)
		return (84);
	pstruct->pid1 = my_getnbr(pid);
	return (0);
}

int loop2(my_struct *pstruct)
{
	while (8) {
		display_map2(pstruct);
		display_map2bis(pstruct);
		receive_2();
		send_if_hit_or_missed_2(pstruct);
		if (get_target(pstruct) == -1)
			return (0);
		send_2(pstruct);
		receive_hit_or_missed_2(pstruct);
		if ((count_x_map_two(pstruct) == 14) || (count2(pstruct) == 0))
			return (if_player_two_loose(pstruct));
		if (count_x_map_twobis(pstruct) == 14)
			return (if_player_two_won(pstruct));
	}
}

int main(int ac, char **av)
{
	my_struct *pstruct = malloc(sizeof(my_struct));

	fill_map(pstruct, ac);
	if (ac != 2 && ac != 3)
		return (84);
	if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
		explanation();
		return (0);
	}
	if (ac == 2) {
		if (player_one(pstruct, av[1]) == 84)
			return (84);
		loop1(pstruct);
	}
	if (ac == 3) {
		if (player_two(pstruct, av[1], av[2]) == 84)
			return (84);
		loop2(pstruct);
	}
	return (0);
}
