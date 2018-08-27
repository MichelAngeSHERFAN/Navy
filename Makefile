#
## EPITECH PROJECT, 2018
## Makefile
## File description:
## navy
##

NAME	=	navy

SRC	=	sources/navy.c \
		sources/signals.c \
		sources/fill_map.c \
		sources/display.c \
		sources/get_pos.c \
		sources/test_pos.c \
		sources/get_target.c \
		sources/verif.c \
		sources/change_map.c \
		sources/count.c \
		sources/count2.c \
		sources/get_next_line.c \
		sources/get_next_line2.c \
		sources/utils.c \
		sources/send_1_1.c \
		sources/send_1_2.c \
		sources/send_2_1.c \
		sources/send_2_2.c \
		sources/explanation.c \
		sources/if_loose_or_win.c \

OBJ	= $(SRC:.c=.o)

CFLAGS  = -W -Wall -Wextra -g3 -fno-builtin -I include/

LDFLAGS = -I include/

all: $(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
		$(RM) -f $(OBJ)

fclean:		clean
		$(RM) -f $(NAME)

re:		fclean
		@$(MAKE) all

.PHONY: all clean fclean re
