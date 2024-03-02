##
## EPITECH PROJECT, 2023
## B-CPE-110-LYN-1-1-settingup-alexis.drago-beltran
## File description:
## makefile
##

SRC =  $(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc ${NAME} ${OBJ}

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:    fclean all
