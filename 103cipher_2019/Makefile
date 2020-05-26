##
## EPITECH PROJECT, 2019
## 103cipher
## File description:
## makefile
##

NAME	=	103cipher

SRC	=	src/main.c			\
		src/encryption.c		\
		src/decryption.c		\
		src/is_key_reversable.c		\
		src/cofactor_matrix.c		\
		src/reverse_keys.c		\
		src/display_keys.c		\
		src/swap_factors.c		\
		src/split_numbers.c		\
		src/fill_matrices.c		\
		src/create_key_matrix.c		\
		src/create_empty_matrices.c	\
		src/compute_matrix.c		\
		src/get_line_nbr.c		\
		src/error_handling.c		\
		src/help_display.c		\
		src/my_strlen.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include/

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS) -lm

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
