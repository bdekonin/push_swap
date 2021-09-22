/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   three_numbers.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:40:57 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/22 12:53:14 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

#define SMALLEST 0
#define MIDDLE 1
#define BIGGEST 2
#define HEAD 3
#define LAST 4

static int	get_middle_num(t_node *list)
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

void	three_numbers(t_vars *v)
{
	int	nums[5];

	nums[SMALLEST] = get_smallest_num(v->a);
	nums[MIDDLE] = get_middle_num(v->a);
	nums[BIGGEST] = get_biggest_num(v->a);
	nums[HEAD] = ft_atoi(v->a->content);
	nums[LAST] = ft_atoi(ft_node_last(v->a)->content);
	if (nums[HEAD] == nums[SMALLEST] && nums[LAST] == nums[MIDDLE])
	{
		caller(v, RRA);
		caller(v, SA);
	}
	else if (nums[HEAD] == nums[MIDDLE] && nums[LAST] == nums[BIGGEST])
		caller(v, SA);
	else if (nums[HEAD] == nums[MIDDLE] && nums[LAST] == nums[SMALLEST])
		caller(v, RRA);
	else if (nums[HEAD] == nums[BIGGEST] && nums[LAST] == nums[SMALLEST])
	{
		caller(v, RA);
		caller(v, SA);
	}
	else if (nums[HEAD] == nums[BIGGEST] && nums[LAST] == nums[MIDDLE])
		caller(v, RA);
	return ;
}
