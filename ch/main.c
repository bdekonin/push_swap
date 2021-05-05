/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 16:26:38 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/05 16:28:50 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	readinput(t_struct *v)
{
	char	*line;
	int		i;
	int		ret;

	while (1)
	{
		i = 0;
		ret = get_next_line(STDIN_FILENO, &line);
		if (ret <= 0)
			break ;
		while (i < OPERATIONS_MAX)
		{
			if (!ft_strcmp(line, v->a[i]))
			{
				(v->p[i](&v->vars));
				break ;
			}
			i++;
		}
		free(line);
	}
	if (ret != -1)
		free(line);
	return (ret);
}

int	main(int argc, char **argv)
{
	t_struct	v;
	int			ret;

	ft_bzero(&v, sizeof(t_struct));
	ret = create_stacks(&v.vars, argc, argv);
	if (ret != 1)
	{
		if (argc != 1)
			ft_putendl_fd("Error", 1);
		free_stacks_and_exit(&v.vars.a, &v.vars.b, EXIT_FAILURE);
	}
	createfunctionarray(&v);
	createstringarray(&v);
	if (readinput(&v) < 0)
	{
		ft_putendl_fd("Error", 1);
		free_stacks_and_exit(&v.vars.a, &v.vars.b, EXIT_FAILURE);
	}
	if (issorted(v.vars.a) && ft_node_size(v.vars.b) == 0)
		printf("[OK]\n");
	else
		printf("[KO]\n");
	free_stacks(&v.vars.a, &v.vars.b, 0);
	return (0);
}
