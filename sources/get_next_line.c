/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** get_next_line.c
*/

#include "my.h"
#include "get_next_line.h"
#include "get_next_line2.h"

char	*get_next_line(int fd)
{
	static char buf[READ_SIZE + 1];
	static int read_nb = -1;
	static int a = 0;
	int b = 0;
	char *rest = NULL;

	while (8) {
		if (a == read_nb || read_nb == -1) {
			if (read_nb < READ_SIZE && read_nb != -1)
				return (rest);
			read_nb = read(fd, buf, READ_SIZE);
			a = 0;
		} else if (buf[a] == '\n') {
			a++;
			return (rest);
		} else {
			rest = my_malloc(rest, b + 1);
			rest[b++] = buf[a++];
			rest[b] = '\0';
		}
	}
}

char	*str_cpy(char *s1, const char *s2)
{
	int a = 0;

	while (s2[a]) {
		s1[a] = s2[a];
		a++;
	}
	s1[a] = '\0';
	return (s1);
}

char	*my_malloc(char *s1, int size_of)
{
	char *s1_re_malloc = malloc(sizeof(char) * size_of + 1);

	if (s1 == NULL) {
		return (s1_re_malloc);
	}
	str_cpy(s1_re_malloc, s1);
	free(s1);
	return (s1_re_malloc);
}
