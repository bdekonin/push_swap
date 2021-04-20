/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solver.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 21:33:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/19 08:50:19 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void *hyptydup(void *ptr)
{
	return (ft_strdup(ptr));
}

void solver(t_vars *v)
{
	// insertionsort(v);

	// t_vars temp;
	// int bereik = 0;
	// int steps = 0;
	// for (int i = 1; i < 100; i++)
	// {
	// 	ft_bzero(&temp, sizeof(t_vars));
	// 	temp.a = ft_node_dup(v->a, hyptydup, NULL);

	// 	insertionsortwithbuf(&temp, i, 0);
	// 	if (temp.steps < steps || steps == 0)
	// 	{
	// 		bereik = i;
	// 		steps = temp.steps;
	// 	}
	// 	// dprintf(2, "[%d] - %d\n", i, (int)temp.steps);
	// }

	// dprintf(2, "Smallest bereik: [%d]", bereik);
	insertionsortwithbuf(v, 30);
}
