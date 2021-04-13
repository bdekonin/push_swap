/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 16:26:38 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/13 18:54:26 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

/*
**  Checker.c
*/



void	readinput(t_list *v)
{
	char	*line;

	while (1)
	{
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
		free(line);
	}
}

static void *createfunctionarray()
{
	void	(*p[11]) (t_vars *v);

	p[SA] = sa;
	p[SB] = sb;
	p[SS] = ss;
	
	p[PA] = pa;
	p[PB] = pb;

	p[RA] = ra;
	p[RB] = rb;
	p[RR] = rr;

	p[RRA] = rra;
	p[RRB] = rrb;
	p[RRR] = rrr;

	return (p);
}


int main(int argc, char **argv)
{

	t_list v;

	ft_bzero(&v, sizeof(t_list));
	create_stacks(&v, argc, argv);
	v.p = createfunctionarray();

	v.p = NULL;

	readinput(&v);

	if (issorted(v.vars.a) && ft_node_size(v.vars.b) == 0)
		printf("[OK]\n");
	else
		printf("[KO]\n");
}