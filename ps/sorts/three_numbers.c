/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   three_numbers.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:40:57 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/04 15:39:40 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// 0 1 2
// 0 2 1	rra	sa
// 1 0 2	sa
// 1 2 0	rra
// 2 1 0	sa	rra of ra sa
// 2 0 1	ra

static int get_middle_num(t_node *list)
{
	t_node	*node;
	int		smallest;
	int		biggest;
	int		current;
	
	node = list;
	smallest = get_smallest_num(list);
	biggest = get_biggest_num(list);
	while (node)
	{
		current = ft_atoi(node->content);
		if (current != smallest && current != biggest)
			return (current);
		node = node->next;
	}
	return (-1);
}

void three_numbers(t_vars *v)
{
	int smallest;
	int middle;
	int biggest;
	int head;
	int last;
	
	smallest = get_smallest_num(v->a);
	middle = get_middle_num(v->a);
	biggest = get_biggest_num(v->a);

	head = ft_atoi(v->a->content);
	last = ft_atoi(ft_node_last(v->a)->content);
	if (head == smallest && last == middle)
	{
		// rra sa
		caller(v, RRA);
		caller(v, SA);
	}
	else if (head == middle && last == biggest)
	{
		// sa
		caller(v, SA);
	}
	else if (head == middle && last == smallest)
	{
		// rra
		caller(v, RRA);
	}
	else if (head == biggest && last == smallest)
	{
		// ra sa
		caller(v, RA);
		caller(v, SA);
	}
	else if (head == biggest && last == middle)
	{
		// ra
		caller(v, RA);
	}
	else
	 	// sorted
	return ;
}