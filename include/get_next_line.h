/*
** EPITECH PROJECT, 2018
** get_next_line.h
** File description:
** get_next_line.h
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef READ_SIZE
#define READ_SIZE (8)

char	*get_next_line(int fd);
char	*my_malloc(char *str, int size);
char	*str_cpy(char *s1, const char *s2);

#endif
