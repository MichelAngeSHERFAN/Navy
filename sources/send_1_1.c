/*
** EPITECH PROJECT, 2018
** send and receive signal 1
** File description:
** send and receive signal 1
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

void handler_2(int sig)
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

void receive_2(void)
{
	breakk[3] = 0;
	breakk[4] = 0;
	breakk[5] = 0;
	if (signal(SIGUSR1, handler_2) == SIG_ERR)
		my_putstr("echec\n");
	else if (signal(SIGUSR2, handler_2) == SIG_ERR)
		my_putstr("echec..\n");
	else
		my_putstr("waiting for enemy's attack...\n");
	while (breakk[5] != 1);
}

void send_1(my_struct *pstruct)
{
	int i = 0;

	while (i < pstruct->column) {
		kill(pstruct->pid2, SIGUSR1);
		usleep(500);
		i++;
	}
	i = 0;
	while (i < pstruct->line) {
		kill(pstruct->pid2, SIGUSR2);
		usleep(500);
		i++;
	}
	kill(pstruct->pid2, SIGUSR1);
}
