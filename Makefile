# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/04/07 19:10:12 by bdekonin      #+#    #+#                  #
#    Updated: 2021/09/22 10:20:34 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

PS = push_swap
CH = checker

NOCOLOR = \033[0m
BLUE = \033[34m
LIGHTBLUE = \033[94m

SRC_UTILS = \
	utils/create_stacks.c  \
	utils/createarray.c \
	utils/free_stacks.c \
	utils/get_biggest_num.c \
	utils/get_smallest_num.c \
	utils/issorted.c \
	utils/caller.c \
	utils/push.c \
	utils/reverse_rotate.c \
	utils/rotate.c \
	utils/swap.c

SRC_PS = $(SRC_UTILS) \
	ps/sorts/insertionsortwithbuf.c \
	ps/sorts/five_numbers.c \
	ps/sorts/three_numbers.c \
	ps/sorts/two_numbers.c \
	ps/main.c \
	ps/solver.c

SRC_CH = $(SRC_UTILS) \
	ch/main.c

LIBFT = ./libft/libft.a

OFILES_PS = $(SRC_PS:.c=.o)
OFILES_CH = $(SRC_CH:.c=.o)

FLAGS =

all: $(PS) $(CH)

$(PS): $(OFILES_PS) $(LIBFT)
	@gcc $(FLAGS) $(SRC_PS) $(LIBFT) -o $(PS)
	@echo "$(BLUE)[$(PS)] - Created Executable and Object Files.$(NOCOLOR)"
$(CH): $(OFILES_CH) $(LIBFT)
	@gcc $(FLAGS) $(SRC_CH) $(LIBFT) -o $(CH)
	@echo "$(LIGHTBLUE)[$(CH)] - Created Executable and Object Files.$(NOCOLOR)"

$(LIBFT):
	@make -C libft

%.o: %.c
	@gcc -Ilibft -c $< -o $@

clean:
	@echo "$(BLUE)[$(PS)] - Removed All Object Files.$(NOCOLOR)"
	@/bin/rm -f $(OFILES_PS)
	@echo "$(LIGHTBLUE)[$(CH)] - Removed All Object Files.$(NOCOLOR)"
	@/bin/rm -f $(OFILES_CH)
	@make -C libft clean

fclean: clean
	@/bin/rm -f $(PS)
	@echo "$(BLUE)[$(PS)] - Removed .a file and all .o files.$(NOCOLOR)"
	@/bin/rm -f $(CH)
	@echo "$(LIGHTBLUE)[$(CH)] - Removed .a file and all .o files.$(NOCOLOR)"
	@make -C libft fclean

py: all
	python3 tester/pyviz.py `ruby -e "puts (1..5).to_a.shuffle.join(' ')"`

5: all
	./push_swap `ruby -e "puts (1..5).to_a.shuffle.join(' ')"`
py5: all
	python3 tester/pyviz.py `ruby -e "puts (1..5).to_a.shuffle.join(' ')"`

100: all
	./push_swap `ruby -e "puts (1..100).to_a.shuffle.join(' ')"`
py100: all
	python3 tester/pyviz.py `ruby -e "puts (1..100).to_a.shuffle.join(' ')"`	

500: all
	./push_swap `ruby -e "puts (1..500).to_a.shuffle.join(' ')"`
py500: all
	python3 tester/pyviz.py `ruby -e "puts (1..500).to_a.shuffle.join(' ')"`

arg: all
	@./push_swap $($@) | ./checker $($@)
	@./push_swap $($@) | wc -l

re: fclean all
