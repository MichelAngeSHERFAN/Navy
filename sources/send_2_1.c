/*
** EPITECH PROJECT, 2018
** send from second player to one
** File description:
** send from second player to one
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

void handler_1(int sig)
{
	if (sig == SIGUSR1)
		breakk[3]++;
	else if (sig == SIGUSR2)
		breakk[4]++;
	else
		my_putstr("bad signal\n");
	if (sig == SIGUSR1 && breakk[4] > 0)
		breakk[5] = 1;
}

void receive_1(void)
{
	breakk[3] = 0;
	breakk[4] = 0;
	breakk[5] = 0;
	if (signal(SIGUSR1, handler_1) == SIG_ERR)
		my_putstr("echec\n");
	else if (signal(SIGUSR2, handler_1) == SIG_ERR)
		my_putstr("echec..\n");
	else
		my_putstr("waiting for enemy's attack...\n");
	while (breakk[5] != 1);
}

void send_2(my_struct *pstruct)
{
	int i = 0;

	while (i < pstruct->column) {
		kill(pstruct->pid1, SIGUSR1);
		usleep(500);
		i++;
	}
	i = 0;
	while (i < pstruct->line) {
		kill(pstruct->pid1, SIGUSR2);
		usleep(500);
		i++;
	}
	kill(pstruct->pid1, SIGUSR1);
}
