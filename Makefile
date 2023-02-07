##
## EPITECH PROJECT, 2022
## my_printf_Makefile
## File description:
## my_printf_Makefile
##

SRC	=	my_putstr.c	\
		my_putchar.c	\
		my_putnbr.c	\
		manage_mouse.c	\
		my_printf.c	\
		close_window.c	\
		move_rect.c	\
		window_destroy.c	\
		file.c	\
		f2.c	\
		my_hunter.c

OBJ	=	$(SRC:.c=.o)
CC	= gcc

NAME	= 	my_hunter

all: 	$(NAME)

$(NAME)	:		$(OBJ)
	 $(CC) $(OBJ)  -o $(NAME) -lcsfml-graphics
clean:
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)
	clear
re:	fclean all
