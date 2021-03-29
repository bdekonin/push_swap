/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solver.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 21:33:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/03/29 13:11:42 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"
void listprinter(t_vars *v);

/* insertion sort */

static int getSmallestNum(t_node *list)
{
	int num = ft_atoi(list->content);

	while (list)
	{
		if (ft_atoi(list->content) < num)
			num = ft_atoi(list->content);
		list = list->next;
	}
	return (num);
}
int getIndex(t_node *h, int num)
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
void findNum(t_vars *v, int num)
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
			caller(v, RA, 1);
		else
			caller(v, RRA, 1);
	}
}
static void insertionsort(t_vars *v)
{
	while (ft_node_size(v->a) > 1) // maybe 0
	{
		findNum(v, getSmallestNum(v->a));
		if (issorted(v->a))
			return ;
		caller(v, PB, 1);
	}
	while (ft_node_size(v->b) > 0)
	{
		caller(v, PA, 1);
	}
}

/* ** */

void solve(t_vars *v)
{
	insertionsort(v);
}
