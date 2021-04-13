/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   insertionsortwithbuf.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 12:44:10 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/13 17:47:28 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

/* insertion sort */
int g_print;

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
static int getBiggestNum(t_node *list)
{
	int num = ft_atoi(list->content);

	while (list)
	{
		if (ft_atoi(list->content) > num)
			num = ft_atoi(list->content);
		list = list->next;
	}
	return (num);
}

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
static void findNum(t_vars *v, int num, int buf)
{
	int x;
	int y;

	int atoi;
	while (1)
	{
		atoi = ft_atoi(v->a->content);
		if ((num - buf) <= atoi && (num + buf) >= atoi)
			return ;
		x = getIndex(v->a, num);
		y = ft_node_size(v->a) / 2;
		if (x < y)
			caller(v, RA, g_print);
		else
			caller(v, RRA, g_print);
	}
}

static void findNumB(t_vars *v, int num)
{
	int x;
	int y;

	int atoi;
	while (1)
	{
		atoi = ft_atoi(v->b->content);
		if (atoi == num)
			return ;
		x = getIndex(v->b, num);
		if (x == -1)
		{
			printf("wtf gebeurt hier\n");
			exit(1);
		}
		y = ft_node_size(v->b) / 2;
		if (x < y)
			caller(v, RB, g_print);
		else
			caller(v, RRB, g_print);
	}
}

void insertionsortwithbuf(t_vars *v, int bereik, int print)
{
	g_print = print;
	while (ft_node_size(v->a) > 1) // maybe 0
	{
		findNum(v, getSmallestNum(v->a), bereik);
		if (issorted(v->a) && ft_atoi(v->a->content) > ft_atoi(v->b->content))
			break ;
		caller(v, PB, g_print);
	}
	caller(v, PB, g_print);
	while (ft_node_size(v->b) > 0)
	{
		findNumB(v, getBiggestNum(v->b));
		caller(v, PA, g_print);
	}
}

