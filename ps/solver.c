/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solver.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 21:33:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/04 16:01:57 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void three_numbers(t_vars *v);
void two_numbers(t_vars *v);
void jaja(t_vars *v, int bereik);

void solver(t_vars *v)
{
	if (ft_node_size(v->a) == 2)
		two_numbers(v);
	else if (ft_node_size(v->a) == 3)
		three_numbers(v);
	else
		insertionsortwithbuf(v, 15);
}
