/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bubblesort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 13:01:47 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/01 13:55:19 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void loop(t_vars *v)
{
	int i = 0;
	int n = ft_node_size(v->a);
	
	int a;
	int b;

	caller(v, PB, 0);
	
	while (i < n)
	{
		a = ft_atoi(v->a->content);
		b = ft_atoi(v->b->content);

		if (b > a)
			caller(v, PB, 1);
		
		
		caller(v, RA, 1);
		i++;
	}
}

void bubblesort(t_vars *v)
{
	loop(v);
}