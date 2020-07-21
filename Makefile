##
## EPITECH PROJECT, 2018
## pushswap
## File description:
## Makefile
##

SRC	=	main.c	\
		manage_sort.c	\
		modify_list.c	\
		my_getnbr.c	\
		sort_to_list.c	\

NAME	=	push_swap

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-g

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my_printf/
	$(CC) -o $(NAME) $(OBJ) -I include/ -L lib -l printf

clean:
	make clean -C lib/my_printf/
	rm -f $(OBJ)

fclean:	clean
	make fclean -C lib/my_printf/
	rm -f $(NAME)

re: fclean all
