##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## 101pong
##

SRC 	=	$(wildcard *.c)

NAME 	=	skala

all: $(NAME)

$(NAME):
	gcc $(SRC) -o $(NAME) -lcsfml-graphics -lcsfml-window	\
	-lcsfml-audio -lcsfml-system

clean:
	rm -f *#
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
