##
## EPITECH PROJECT, 2017
## my_printf
## File description:
## Makefile
##

SRC	=	my_printf.c		\
		flags.c			\
		flags2.c		\
		my_put_char.c		\
		my_put_nbr.c		\
		my_put_char.c		\
		my_put_nbr_base.c	\
		my_put_nbr_base_hex.c	\
		my_put_nbr_u.c		\
		my_put_pointer.c	\
		my_put_str.c		\
		my_put_str_np.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_printf

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