/*
** EPITECH PROJECT, 2018
** utils.c
** File description:
** utils.c
*/

#include "my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char const *str)
{
	int a = 0;

	while (str[a] != '\0') {
		my_putchar(str[a]);
		a = a + 1;
	}
}

int	my_getnbr(char const *str)
{
	int a = 0;
	int ret = 0;

	if (str == NULL)
		return (0);
	if (str[0] == '-' && str[1] != '\0')
		a = a + 1;
	while (str[a] != '\0') {
		ret = ret + (str[a] - 48);
		if (str[a + 1] != 0)
			ret = ret * 10;
		else
			break;
		a = a + 1;
	}
	if (str[0] == '-')
		return (-1 * ret);
	else
		return (ret);
}

void	my_put_nbr(int nb)
{
	if (nb < -2147483647)
		my_putstr("-2147483648");
	else if (nb < 0) {
		nb = nb * -1;
		my_putchar('-');
	} else if (nb >= 10) {
		my_put_nbr(nb / 10);
		my_put_nbr(nb % 10);
	} else
		my_putchar(nb + '0');
}

int	my_strlen(char *str)
{
	int i = 0;

	while (str && str[i] != '\0')
		i++;
	return (i);
}
