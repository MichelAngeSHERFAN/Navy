/*
** EPITECH PROJECT, 2018
** get_next_line2.h
** File description:
** get_next_line2.h
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef READ_SIZE_2
#define READ_SIZE_2 (1)

char	*get_next_line2();
char	*my_malloc2(char *str, int size);
char	*str_cpy2(char *s1, const char *s2);

#endif
