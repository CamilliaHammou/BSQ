##
## EPITECH PROJECT, 2021
## day09
## File description:
## makefile
##

SRC 	=	print.c \
			bsq.c \
			my_putchar.c \
			my_putstr.c \
			my_get_nbr.c \
			fs_open_file.c

OBJ	=	$(SRC:.c=.o)

NAME 	= 	bsq

all: 	$(NAME)

$(NAME): 	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
