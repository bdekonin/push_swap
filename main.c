/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 13:23:22 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/03/30 10:39:42 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	print_stacks(t_vars *v, char *next_cmd);

void print_node_list(t_node *node)
{
	while (node)
	{
		ft_putstr_fd("[", 1);
		ft_putstr_fd(node->content, 1);
		ft_putendl_fd("]", 1);
		node = node->next;
	}
}

void listprinter(t_vars *v)
{
	ft_putendl_fd("", 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("A", 1);
	print_node_list(v->a);
	ft_putendl_fd("", 1);
	ft_putendl_fd("B", 1);
	print_node_list(v->b);
}

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
		listprinter(v);
	}
}

void init(t_vars *v, char **argv)
{
	// check duplicate

	argv = ft_split(argv[1], ' ');
		
	v->a = ft_node_new(argv[0]);
	// v->b = ft_node_new(NULL);
	for (int i = 1; argv[i]; i++)
		ft_node_add_back(&v->a, ft_node_new(argv[i]));
}

int main(int argc, char **argv)
{
	t_vars v;
	ft_bzero(&v, sizeof(t_vars));
	init(&v, argv);
	
	// listprinter(&v);
	solve(&v);
	// listprinter(&v);
	// print_stacks(&v, "");
}
