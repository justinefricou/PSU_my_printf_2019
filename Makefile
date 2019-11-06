##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## A Makefile that compiles libmy
##

NAME	=	libmy.a
NAME_TESTS	=	tests_my_printf

SRC	=	lib/my/my_printf.c 	\
		lib/my/display_result.c 	\
		lib/my/my_strlen.c 	\
		lib/my/my_putchar.c 	\
		lib/my/my_putstr.c 	\
		lib/my/my_put_nbr.c

#####################################################

NAME_PROGR = progr

SRC_PROGR = lib/my/my_printf.c 	\
			lib/my/display_result.c 	\
			lib/my/my_strlen.c 	\
			lib/my/my_putchar.c 	\
			lib/my/my_putstr.c 	\
			lib/my/my_put_nbr.c 	\
			main.c

OBJ_PROGR	=	$(SRC_PROGR:.c=.o)

progr:	$(OBJ_PROGR)
		gcc -o $(NAME_PROGR) $(OBJ_PROGR)

#####################################################

SRC_TESTS	=

OBJ	=	$(SRC:.c=.o)
OBJ_TESTS	=	$(SRC_TESTS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f $(OBJ_TESTS)

fclean: clean
		rm -f $(NAME)
		rm -f $(NAME_TESTS)
		rm -f *.gcno
		rm -f *.gcda

re:	fclean all

tests_run: 	$(OBJ) $(OBJ_TESTS)
			gcc -o $(NAME_TESTS) $(OBJ) $(OBJ_TESTS) --coverage -lcriterion
			./$(NAME_TESTS)