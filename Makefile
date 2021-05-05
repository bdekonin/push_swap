# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/04/07 19:10:12 by bdekonin      #+#    #+#                  #
#    Updated: 2021/05/05 18:03:00 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

PS = push_swap
CH = checker

SRC_UTILS = \
	utils/create_stacks.c  \
	utils/createarray.c \
	utils/free_stacks.c \
	utils/get_biggest_num.c \
	utils/get_smallest_num.c \
	utils/issorted.c \
	utils/operations.c

SRC_PS = $(SRC_UTILS) \
	ps/sorts/insertionsortwithbuf.c \
	ps/sorts/three_numbers.c \
	ps/sorts/two_numbers.c \
	ps/main.c \
	ps/solver.c

SRC_CH = $(SRC_UTILS) \
	ch/main.c

LIBFT = ./libft/libft.a

OFILES_PS = $(SRC_PS:.c=.o)
OFILES_CH = $(SRC_CH:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(PS) $(CH)

$(PS): $(OFILES_PS) $(LIBFT)
	gcc $(FLAGS) $(SRC_PS) $(LIBFT) -o $(PS)
$(CH): $(OFILES_CH) $(LIBFT)
	gcc $(FLAGS) $(SRC_CH) $(LIBFT) -o $(CH)

$(LIBFT):
	make -c libft

%.o: %.c
	gcc -Ilibft -c $< -o $@

clean:
	@/bin/rm -f $(OFILES_PS)
	@/bin/rm -f $(OFILES_CH)

fclean: clean
	@/bin/rm -f $(PS)
	@/bin/rm -f $(CH)	





# # Utils
# UTILS = utils/*.c
# LIBFT = ./libft/libft.a

# SRC_P = $(UTILS) ps/*.c ps/sorts/*.c
# SRC_C = $(UTILS) ch/*.c

# all:
# 	gcc $(SRC_P) $(LIBFT) -o push_swap
# 	gcc $(SRC_C) $(LIBFT) -o checker

# py: all
# 	python3 tester/pyviz.py `ruby -e "puts (1..100).to_a.shuffle.join(' ')"`

# arg: all
# 	@./push_swap $($@) | ./checker $($@)
# 	@./push_swap $($@) | wc -l

# clean:
# 	rm push_swap checker
