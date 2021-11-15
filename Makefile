##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	src/match.c	\
		src/my_getnbr.c	\
		src/my_putchar.c	\
		src/my_putstr.c	\
		src/my_put_nbr.c	\
		src/map.c	\
		src/play.c	\
		src/bot.c	\
		src/compt.c	\
		src/space.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: clean fclean re all
