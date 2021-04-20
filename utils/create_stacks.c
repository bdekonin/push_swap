/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_stacks.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/08 10:38:19 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/20 13:20:36 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

# define BAD 1 //
# define GOOD 0
# define ERROR -1

static int error(t_vars *v, int ret)
{
	ft_node_del_all(&v->a, free);
	ft_node_del_all(&v->b, free);
	return (ret);
}

static int checkduplicate(t_vars *v)
{
	t_node *one;
	t_node *two;

	one = v->a;
	while (one)
	{
		two = one->next;
		while (two)
		{
			if (!ft_strcmp(one->content, two->content))
				return (BAD);
			two = two->next;
		}
		one = one->next;
	}
	return (GOOD);
}

int create_stacks(t_vars *v, int argc, char **argv)
{
	int i;
	int j;
	char **array;

	i = 1;
	array = NULL;
	if (argc == 1)
		return (ERROR);
	while (argv[i])
	{
		j = 0;
		array = ft_split(argv[i], ' ');
		if (!array)
			return (error(v, ERROR));
		while (array[j])
		{
			ft_node_add_back(&v->a, ft_node_new(array[j]));
			j++;
		}
		free(array);
		i++;
	}
	
	if (checkduplicate(v) == BAD)
		return (error(v, BAD));
	return (GOOD);
}
