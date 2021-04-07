# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lverdoes <lverdoes@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/09 18:45:34 by lverdoes      #+#    #+#                  #
#    Updated: 2021/04/07 16:16:48 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = kaas.c \
	push_swap.c \
	src/issorted.c \
	src/operations.c \
	src/solver.c \
	sorts/insertionsort.c \
	sorts/insertionsortwithbuf.c


OBJ = $(addprefix obj/, $(SRC:.c=.o))
CC = gcc -Wall -Wextra -Werror
LIBFT = ./libft/libft.a
INCLUDES = ./src/$(NAME).h

all: $(NAME)

./libft/libft.a:
	make -C ./libft

$(NAME):
	gcc $(SRC) $(LIBFT) -o push_swap

clean:
	@/bin/rm -f $(OBJ)
	@make clean -C ./libft

fclean: clean
	@/bin/rm -f $(LIBFT) $(NAME)
	@/bin/rm -rf obj
	@make fclean -C ./libft

py: all
	python3 ./tester/pyviz.py `ruby -e "puts (0..100).to_a.shuffle.join(' ')"`

run: all
	./$(NAME) `ruby -e "puts (0..100).to_a.shuffle.join(' ')"`

re: fclean all