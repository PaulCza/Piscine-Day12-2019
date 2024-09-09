##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oh bordel
##

SRC     =       my_putchar.c    \
		main.c          \
                error.c		\
		infini.c	\
		my_strlen.c	\
		my_putstr.c	\

NAME    = cat

OBJ     = $(SRC:.c=.o)

all:    $(NAME)

$(NAME):        $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *.c~

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
