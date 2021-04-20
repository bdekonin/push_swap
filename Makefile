# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/04/07 19:10:12 by bdekonin      #+#    #+#                  #
#    Updated: 2021/04/20 13:49:38 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# Utils
UTILS = utils/*.c
LIBFT = ./libft/libft.a

SRC_P = $(UTILS) ps/*.c ps/sorts/*.c
SRC_C = $(UTILS) ch/*.c

all:
	gcc $(SRC_P) $(LIBFT) -o push_swap
	gcc $(SRC_C) $(LIBFT) -o checker

py: all
	# @./push_swap $($@) | ./checker $($@)
	# @./push_swap $($@) | wc -l
	python3 tester/pyviz.py `ruby -e "puts (1..22).to_a.shuffle.join(' ')"`

arg: all
	@./push_swap $($@) | ./checker $($@)
	@./push_swap $($@) | wc -l

clean:
	rm push_swap checker
