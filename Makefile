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
		lib/my/pf_char.c 	\
		lib/my/pf_str.c 	\
		lib/my/pf_int.c 	\
		lib/my/pf_u.c 	\
		lib/my/pf_n.c 	\
		lib/my/pf_b.c 	\
		lib/my/pf_o.c 	\
		lib/my/pf_xmajx.c 	\
		lib/my/pf_p.c 	\
		lib/my/pf_S.c 	\
		lib/my/tools.c 	\
		lib/my/bases_tools.c

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