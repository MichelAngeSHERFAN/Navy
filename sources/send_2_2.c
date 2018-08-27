/*
** EPITECH PROJECT, 2018
** receive from second player to one
** File description:
** receive from second player to one
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

void receive_handler_2(int sig)
{
	if (sig == SIGUSR1) {
		breakk[6] = 1;
		breakk[7] = 1;
	} else if (sig == SIGUSR2) {
		breakk[6] = 1;
		breakk[7] = 2;
	} else
		my_putstr("bag signal\n");
}

void receive_hit_or_missed_2(my_struct *pstruct)
{
	breakk[6] = 0;
	breakk[7] = 0;
	if (signal(SIGUSR1, receive_handler_2) == SIG_ERR)
		my_putstr("echec\n");
	if (signal(SIGUSR2, receive_handler_2) == SIG_ERR)
		my_putstr("echec..\n");
	while (breakk[6] != 1);
	change_map2(pstruct);
}

void send_if_hit_or_missed_1(my_struct *pstruct)
{
	if (check_map1(pstruct) == -1)
		kill(pstruct->pid2, SIGUSR1);
	else
		kill(pstruct->pid2, SIGUSR2);
}
