/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   three_numbers.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:40:57 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 14:50:45 by bdekonin      ########   odam.nl         */
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
	biggest = get_smallest_num(list);
	while (node)
	{
		current = ft_atoi(node->content);
		if (current != smallest && current != biggest)
			return (ft_atoi(node->content));
		node = node->next;
	}
	return (-1);
}

void three_numbers(t_vars *v)
{
	int smallest;
	int biggest;
	int current;
	
	smallest = get_smallest_num(v->a);
	biggest = get_smallest_num(v->b);
	current = ft_atoi(v->a->content);
	
	// if (smallest == ft_atoi())
	// {
		
	// }
}