/*
** EPITECH PROJECT, 2018
** send and receive 2
** File description:
** send and receive 2
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

void receive_handler_1(int sig)
{
	if (sig == SIGUSR1) {
		breakk[6] = 1;
		breakk[7] = 1;
	} else if (sig == SIGUSR2) {
		breakk[6] = 1;
		breakk[7] = 2;
	} else
		my_putstr("bad signal\n");
}

void receive_hit_or_missed_1(my_struct *pstruct)
{
	breakk[6] = 0;
	breakk[7] = 0;
	if (signal(SIGUSR1, receive_handler_1) == SIG_ERR)
		my_putstr("echec\n");
	if (signal(SIGUSR2, receive_handler_1) == SIG_ERR)
		my_putstr("echec..\n");
	while (breakk[6] != 1);
	change_map1(pstruct);
}

void send_if_hit_or_missed_2(my_struct *pstruct)
{
	if (check_map2(pstruct) == -1)
		kill(pstruct->pid1, SIGUSR1);
	else
		kill(pstruct->pid1, SIGUSR2);
}
