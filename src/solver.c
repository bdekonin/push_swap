/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solver.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 21:33:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/03/18 12:27:16 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

/* insertion sort */

static int getSmallestNum(t_list *list)
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

void findNum(t_vars *v, int num)
{
	while (1)
	{
		if (ft_atoi(v->a->content) == num)
			return ;
		ra(v);
	}
}

static void insertionsort(t_vars *v)
{
	int smallest;
	

	// while (issorted(v->a) == 0)
	
	while (ft_lstsize(v->a) > 1)
	{
		smallest = getSmallestNum(v->a);
		findNum(v, smallest);
		pb(v);
	}
}

/* ** */

void solve(t_vars *v)
{
	// 	pb(v);
	// while (issorted(v->a) == 0)
	// {
	// 	for (t_list *list = v->a; list; list = list->next)
	// 	{
			
	// 	}
	// }

	insertionsort(v);
}