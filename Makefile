##
## EPITECH PROJECT, 2017
## matchstick
## File description:
## Makefile
##

SRC	=	src/board.c		\
		src/display.c		\
		src/main.c		\
		src/matchstick.c	\
		src/struct.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	=	-Wall -Wextra

LDFLAGS	=	-L./lib -lmy_printf -lmy_tools

all:		makelib $(OBJ)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

makelib:
		cd lib/my_printf ; make
		cd lib/my_tools	; make

cleanlib:
		cd lib/my_printf ; make fclean
		cd lib/my_tools ; make fclean

clean:
		rm -f $(OBJ)

fclean:		cleanlib clean
		rm -f $(NAME)

re:		fclean all

tests_run: