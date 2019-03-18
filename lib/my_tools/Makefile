##
## EPITECH PROJECT, 2017
## my_tools
## File description:
## Makefile
##

SRC	=	my_getnbr.c	\
		my_str_isnum.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strlen.c	\
		get_next_line.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	my_tools

LIB_NAME=	lib$(NAME).a

all: 		$(OBJ)
		ar rc $(LIB_NAME) $(OBJ)
		ranlib $(LIB_NAME)
		mv $(LIB_NAME) ../

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f ../$(LIB_NAME)

re:		fclean all