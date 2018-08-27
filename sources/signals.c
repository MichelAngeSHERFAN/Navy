/*
** EPITECH PROJECT, 2018
** signals first connection
** File description:
** signals first connection
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

void signal_handler(int sign, siginfo_t *siginfo, void *a)
{
	(void)a;
	if (sign == SIGUSR1) {
		my_putstr("\nenemy connected\n\n");
		breakk[0] = 1;
		breakk[1] = siginfo->si_pid;
	} else
		my_putstr("echec USR2\n");
}

void signaux2(void)
{
	struct sigaction sa;

	sa.sa_sigaction = &signal_handler;
	sa.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sa, NULL) < 0)
		my_putstr("gestionnaireR1 echec\n");
	else
		my_putstr("waiting for enemy connection...\n");
}

void first_connection1(my_struct *pstruct)
{
	breakk[0] = 0;
	pstruct->pid1 = getpid();
	my_putstr("my_pid:  ");
	my_put_nbr(pstruct->pid1);
	my_putchar('\n');
	signaux2();
	while (breakk[0] != 1);
}

int first_connection2(int t_pid1, my_struct *pstruct)
{
	pstruct->pid1 = 5;
	pstruct->pid2 = getpid();
	my_putstr("my_pid:  ");
	my_put_nbr(pstruct->pid2);
	my_putchar('\n');
	if (kill(t_pid1, SIGUSR1) < 0) {
		my_putstr("\nFailed to send signal\n");
		return (-1);
	} else
		my_putstr("successfully connected\n\n");
	return (0);
}
