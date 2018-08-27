/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

#ifndef MY_H
#define MY_H

int breakk[7];

typedef struct struct_t {
	char **map_game1;
	char **map_game1bis;
	char **map_game2;
	char **map_game2bis;
	char **verif_pos;
	char *target_test;
	int column;
	int line;
	int ac;
	int pid1;
	int pid2;
	int cheat1;
	int cheat2;
} my_struct;

char **init_map(void);
void fill_map(my_struct *pstruct, int ac);
int display_map1(my_struct *pstruct);
int display_map1bis(my_struct *pstruct);
int display_map2(my_struct *pstruct);
int display_map2bis(my_struct *pstruct);
int player_one(my_struct *pstruct, char *pos1);
int loop1(my_struct *pstruct);
int player_two(my_struct *pstruct, char *pid, char *pos2);
int loop2(my_struct *pstruct);
int change_map1(my_struct *pstruct);
int change_map2(my_struct *pstruct);
int check_map2(my_struct *pstruct);
int check_map1(my_struct *pstruct);
int pos_test(my_struct *pstruct, char *pathname);
int split(char *buff);
int test(my_struct *pstruct);
int test2(my_struct *pstruct, int i);
int test3(my_struct *pstruct, int i);
int test4(my_struct *pstruct, int i);
int count_boats(char **map);
int count_x_map_one(my_struct *pstruct);
int count_x_map_onebis(my_struct *pstruct);
int count_x_map_two(my_struct *pstruct);
int count_x_map_twobis(my_struct *pstruct);
int if_player_one_loose(my_struct *pstruct);
int if_player_one_won(my_struct *pstruct);
int if_player_two_loose(my_struct *pstruct);
int if_player_two_won(my_struct *pstruct);
int count1(my_struct *pstruct);
int count2(my_struct *pstruct);
int place_boats1(my_struct *pstruct, char *str);
int place_boats2(my_struct *pstruct, char *str);
int get_pos(my_struct *pstruct, char *pathname);
int get_pos2(my_struct *pstruct, int i, char *str_pos, int fd);
int pos_test(my_struct *pstruct, char *pathname);
int get_target(my_struct *pstruct);
int verif_target(my_struct *pstruct);
int verif_target2(my_struct *pstruct);
void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char const *str);
int my_getnbr(char const *str);
int my_strlen(char *str);
void first_connection1(my_struct *pstruct);
void signaux2(void);
void signal_handler(int sign, siginfo_t *siginfo, void *a);
int first_connection2(int t_pid1, my_struct *pstruct);
void send_1(my_struct *pstruct);
void receive_2(void);
void handler(int sig);
void send_1(my_struct *pstruct);
void receive_2(void);
void handler_2(int sig);
void send_if_hit_or_missed_2(my_struct *pstruct);
void receive_hit_or_missed_1(my_struct *pstruct);
void receive_handler_1(int sig);
void send_2(my_struct *pstruct);
void receive_1(void);
void handler_1(int sig);
void send_if_hit_or_missed_1(my_struct *pstruct);
void receive_hit_or_missed_2(my_struct *pstruct);
void receive_handler_2(int sig);
void explanation(void);
int display_error1(my_struct *pstruct);
int display_error2(my_struct *pstruct);
int display_error3(my_struct *pstruct);

#endif
