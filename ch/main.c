/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 16:26:38 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/20 13:48:39 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	readinput(t_list *v)
{
	char	*line;
	int i;

	while (1)
	{
		i = 0;
		if (get_next_line(STDIN_FILENO, &line) <= 0)
			break ;
		while (i < OPERATIONS_MAX)
		{
			if (!ft_strcmp(line, v->a[i]))
			{
				(v->p[i] (&v->vars));
				break ;
			}
			i++;
		}
		free(line);
	}
	free(line);
	return (0);
}

static void createfunctionarray(t_list *v)
{
	v->p[SA] = sa;
	v->p[SB] = sb;
	v->p[SS] = ss;
	
	v->p[PA] = pa;
	v->p[PB] = pb;

	v->p[RA] = ra;
	v->p[RB] = rb;
	v->p[RR] = rr;

	v->p[RRA] = rra;
	v->p[RRB] = rrb;
	v->p[RRR] = rrr;
}

static void createstringarray(t_list *v)
{
	v->a[SA] = "sa";
	v->a[SB] = "sb";
	v->a[SS] = "ss";
	
	v->a[PA] = "pa";
	v->a[PB] = "pb";

	v->a[RA] = "ra";
	v->a[RB] = "rb";
	v->a[RR] = "rr";

	v->a[RRA] = "rra";
	v->a[RRB] = "rrb";
	v->a[RRR] = "rrr";
}

int main(int argc, char **argv)
{
	t_list v;
	int ret;

	ft_bzero(&v, sizeof(t_list));
	ret = create_stacks(&v.vars, argc, argv);
	if (ret != 0)
	{
		ft_putendl_fd("Error\n", 1);
		ft_node_del_all(&v.vars.a, free);
		ft_node_del_all(&v.vars.b, free);
		return (ret);
	}
	
	createfunctionarray(&v);
	createstringarray(&v);

	readinput(&v);

	if (issorted(v.vars.a) && ft_node_size(v.vars.b) == 0)
		printf("[OK]\n");
	else
		printf("[KO]\n");
	
	ft_node_del_all(&v.vars.a, free);
	ft_node_del_all(&v.vars.b, free);
	return (0);
}