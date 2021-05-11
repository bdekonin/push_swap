/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solver.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 21:33:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 16:56:21 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	solver(t_vars *v)
{
	if (ft_node_size(v->a) == 2)
		two_numbers(v);
	else if (ft_node_size(v->a) == 3)
		three_numbers(v);
	else
		insertionsortwithbuf(v, 15);
}
