/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   insertionsort.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 12:44:10 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 14:09:32 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"


/* insertion sort */

static int getIndex(t_node *h, int num)
{
	int i;

	i = 0;
	while (h)
	{
		if (ft_atoi(h->content) == num)
			return (i);
		h = h->next;
		i++;
	}
	return (-1);
}
static void findNum(t_vars *v, int num)
{
	int x;
	int y;

	while (1)
	{
		if (ft_atoi(v->a->content) == num)
			return ;
		x = getIndex(v->a, num);
		y = ft_node_size(v->a) / 2;
		if (x < y)
			caller(v, RA);
		else
			caller(v, RRA);
	}
}

void insertionsort(t_vars *v)
{
	while (ft_node_size(v->a) > 1) // maybe 0
	{
		findNum(v, get_smallest_num(v->a));
		if (issorted(v->a))
			break ;
		caller(v, PB);
	}
	while (ft_node_size(v->b) > 0)
	{
		caller(v, PA);
	}
}

/* ** */
