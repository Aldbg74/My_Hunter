##
## EPITECH PROJECT, 2023
## B-MUL-100-LYN-1-1-myhunter-alexis.drago-beltran
## File description:
## Makefile
##

SRC =  src/define_map.c \
		src/define_plane.c \

OBJ = $(SRC:.c=.o)

NAME = my_radar

all:    $(NAME)

$(NAME):    $(OBJ)
	make -C lib/my/ all
	gcc $(SRC) -o $(NAME) -L./lib/my -lmy -g3 -lcsfml-graphics
	rm -rf *.o

clean:
	make -C lib/my/ clean

fclean:    clean
	make -C ./lib/my fclean
	rm -f $(NAME)

re:    fclean all
