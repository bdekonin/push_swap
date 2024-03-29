/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   insertionsortwithbuf.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 12:44:10 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/22 10:32:30 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

static int	getIndex(t_node *h, int num)
{
	int	i;

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

void	findNum(t_vars *v, int num, int buf)
{
	int	x;
	int	y;
	int	atoi;

	while (1)
	{
		atoi = ft_atoi(v->a->content);
		if (num == -2147483648)
			return ;
		if ((num - buf) <= atoi && (num + buf) >= atoi)
			return ;
		x = getIndex(v->a, num);
		y = ft_node_size(v->a) / 2;
		if (x < y)
			caller(v, RA);
		else
			caller(v, RRA);
	}
}

void	findNumB(t_vars *v, int num)
{
	int	x;
	int	y;
	int	atoi;

	while (1)
	{
		atoi = ft_atoi(v->b->content);
		if (atoi == num)
			return ;
		x = getIndex(v->b, num);
		if (v->b->next && ft_atoi(v->b->next->content) == num)
			caller(v, SB);
		else
		{
			y = ft_node_size(v->b) / 2;
			if (x < y)
				caller(v, RB);
			else
				caller(v, RRB);
		}
	}
}

void	insertionsortwithbuf(t_vars *v, int bereik)
{
	if (issorted(v->a))
		return ;
	while (ft_node_size(v->a) > 1)
	{
		findNum(v, get_smallest_num(v->a), bereik);
		if (issorted(v->a) && ft_atoi(v->a->content) > ft_atoi(v->b->content))
			break ;
		caller(v, PB);
	}
	caller(v, PB);
	while (ft_node_size(v->b) > 0)
	{
		findNumB(v, get_biggest_num(v->b));
		caller(v, PA);
	}
}
