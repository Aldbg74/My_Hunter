##
## Gertrude v.1
##
## This Makefile was generated using Gertrude
##
## (Gertrude is an open-source Makefile creation tool)
##

SRC	=	$(wildcard *.c)	\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

NAME	=	My_Hunter

CFLAGS	+=	-L./lib/my -lmy -g3 -lcsfml-graphics

all:	build	clean

build:	$(OBJ)	gertrude
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
clean:
	rm -f vgcore.* $(OBJ) *.gch

fclean:	clean
	rm -f $(NAME)

re:	fclean	all

gertrude:
	@echo -e "\n\n\033[3mGertrude-CLI - Makefile creation tool\033[0m\n"

.PHONY:	all	build	clean	fclean	re
