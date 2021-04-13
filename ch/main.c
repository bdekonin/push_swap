/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 16:26:38 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/08 14:32:01 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

/*
**  Checker.c
*/

void readinput(t_vars *v)
{
	char *line;
	
	while (1)
	{
		// print_stacks(v, "");
		if (get_next_line(STDIN_FILENO, &line) <= 0)
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

int main(int argc, char **argv)
{
	t_vars v;
	ft_bzero(&v, sizeof(t_vars));
	create_stacks(&v, argc, argv);

	readinput(&v);

	if (issorted(v.a) && ft_node_size(v.b) == 0)
		printf("[OK]\n");
	else
		printf("[KO]\n");
}