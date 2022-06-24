##
## EPITECH PROJECT, 2022
## mineRPG
## File description:
## Makefile
##

SRC		=	./src/main.c							\
			./src/window.c							\
			./src/init_display.c					\
			$(wildcard ./src/battle/*.c)			\
			$(wildcard ./src/init/*.c)				\
			$(wildcard ./src/menu/*.c)				\
			$(wildcard ./src/map/*.c)				\
			$(wildcard ./src/character/*.c)			\
			$(wildcard ./src/event/*.c)				\

OBJ		=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-W -Wall -Wextra -g

all:	$(NAME)
		@echo -e "\033[0;34m<$(NAME) is now ready to use>\033[00m"

$(NAME):	$(OBJ)
	gcc $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system	\
	-lcsfml-audio -o $(NAME)
	@echo -e "\033[0;34m<useless file has been deleted -> .o>\033[00m"
	rm -f $(OBJ)

clean:
	@echo -e "\033[0;34m<Deleting useless files>\033[00m"
	rm -f $(OBJ)

fclean:    clean
	rm -f $(NAME)

re:	fclean all