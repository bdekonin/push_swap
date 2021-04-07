/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 13:23:22 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/06 15:38:08 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_vars *v, char *next_cmd);

void readinput(t_vars *v)
{
	char *line;
	
	while (1)
	{
		if (get_next_line(STDIN_FILENO, &line) < 0)
			return ;
		if (!ft_strncmp(line, "sa", 3))
			sa(v);
		else if (!ft_strncmp(line, "sb", 3))
			sb(v);
		else if (!ft_strncmp(line, "ss", 3))
			ss(v);
		else if (!ft_strncmp(line, "pa", 3))
			pa(v);
		else if (!ft_strncmp(line, "pb", 3))
			pb(v);
		else if (!ft_strncmp(line, "ra", 3))
			ra(v);
		else if (!ft_strncmp(line, "rb", 3))
			rb(v);
		else if (!ft_strncmp(line, "rr", 3))
			rr(v);
		else if (!ft_strncmp(line, "rra", 4))
			rra(v);
		else if (!ft_strncmp(line, "rrb", 4))
			rrb(v);
		else if (!ft_strncmp(line, "rrr", 4))
			rrr(v);
	}
}

void init(t_vars *v, char argc, char **argv)
{
	char **array;

	// check duplicate

	v->a = NULL;
	array = NULL;
	for (int i = 1; argv[i]; i++)
	{
		array = ft_split(argv[i], ' ');
		
		for (int j = 0; array[j]; j++)
			ft_node_add_back(&v->a, ft_node_new(ft_strdup(array[j])));
		free(array);
	}
}

int main(int argc, char **argv)
{
	t_vars v;
	ft_bzero(&v, sizeof(t_vars));
	init(&v, argc, argv);

	if (ft_node_size(v.a) > 0)
		;
	else
	{
		printf("DSnjhbajkdgbajkdna\n");
		exit(1);
	}
	
	// print_stacks(&v, "end");
	solve(&v);
	// print_stacks(&v, "end");


	// if (issorted(v.a) == 1)
	// 	printf("[OK]\n");
	// else
	// 	printf("[KO]\n");
}



/*
	5 < 12
	"1 5 2 4 3"
	"4 9 3 7 1"
	"9 4 6 8 2"

	3 < 4
	"2 1 0"
	" 1 2 0"

	""
	


*/
