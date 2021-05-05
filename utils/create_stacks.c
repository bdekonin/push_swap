/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_stacks.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/08 10:38:19 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/05 18:01:37 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static int checkduplicate(t_vars *v)
{
	t_node *one;
	t_node *two;
	double n;

	one = v->a;
	while (one)
	{
		two = one->next;
		n  = ft_atod(one->content);
		if (n > INT_MAX || n < INT_MIN)
    		return (0);
		while (two)
		{
			if (!ft_strcmp(one->content, two->content))
				return (0);
			two = two->next;
		}
		one = one->next;
	}
	return (1);
}

static int containsnumbers(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] == '-' && ft_isdigit(str[i + 1]))
			;
		else if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int addnode(char *string, t_node **a, t_node **b)
{
	t_node *temp;

	if (!containsnumbers(string))
		return (0);
	temp = ft_node_new(string);
	if (!temp)
		return (0);
	ft_node_add_back(a, temp);
	return (1);
}

int create_stacks(t_vars *v, int argc, char **argv)
{
	int i;
	int j;
	char **array;

	i = 1;
	array = NULL;
	if (argc == 1)
		return (0);
	while (argv[i])
	{
		j = 0;
		array = ft_split(argv[i], ' ');
		if (!array)
			return (0);
		while (array[j])
		{
			if (!addnode(array[j], &v->a, &v->b))
				return (0);
			j++;
		}
		free(array);
		i++;
	}
	
	if (!checkduplicate(v))
		return (0);
	return (1);
}
