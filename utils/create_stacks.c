/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_stacks.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/08 10:38:19 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/19 13:06:46 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

# define GOOD 1
# define BAD -1

static int error(t_vars *v)
{
	ft_node_del_all(&v->a, free);
	ft_node_del_all(&v->b, free);
	return (BAD);
}

static int checkduplicate(t_vars *v)
{
	t_node *one;
	t_node *two;

	one = 
	while (one)
	{
		i
	}
}

int create_stacks(t_vars *v, int argc, char **argv)
{
	int i;
	int j;
	char **array;

	i = 1;
	array = NULL;
	// Check Duplicate
	while (argv[i])
	{
		j = 0;
		array = ft_split(argv[i], ' ');
		if (!array)
			return (error(v));
		while (array[j])
		{
			ft_node_add_back(&v->a, ft_node_new(array[j]));
			j++;
		}
		free(array);
		i++;
	}
	return (GOOD);
}
