/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 13:23:22 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/03/18 13:36:31 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void simple(t_vars *v, char **argv)
{

	for (int i = 0; argv[i]; i++)
	{
		if (i == 0)
		{
			v->a = ft_lstnew(argv[i]);
			v->b = ft_lstnew(NULL);
		}
		else
		{
			ft_lstadd_back(&v->a, ft_lstnew(argv[i]));
			ft_lstadd_back(&v->b, ft_lstnew(NULL));
		}
	}
}

void listprinter(t_vars *v)
{
	t_list	*tempA = v->a;
	t_list	*tempB = v->b;
	// while (tempA && tempB)
	// for (t_list *temp = v->a; temp; temp = temp->next)
	while (1)
	{
		printf("(a) [%s]\t\t(b) [%s]\n", tempA->content, tempB->content);
		if (tempA)
			tempA = tempA->next;
		// else
		// 	tempA->content = ft_strdup("");
		if (tempB)
			tempB = tempB->next;
		// else
		// 	tempB->content = ft_strdup("");
		
		if (!tempA && !tempB)
			break ;
	}
	printf("\n");
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

	v->a = ft_lstnew(argv[0]);
	v->b = ft_lstnew(NULL);
	for (int i = 1; argv[i]; i++)
		ft_lstadd_back(&v->a, ft_lstnew(argv[i]));
}

int main(int argc, char **argv)
{
	t_vars v;
	ft_bzero(&v, sizeof(t_vars));
	
	argv = ft_split(argv[1], ' ');
	// simple(&v, argv);
	init(&v, argv);
	
	// listprinter(&v);

	solve(&v);

	// listprinter(&v);
	// readinput(&v);

	// listprinter(&v);
}
