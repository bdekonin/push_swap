/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solver.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 21:33:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/06 20:36:54 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void listprinter(t_vars *v);

void solve(t_vars *v)
{
	// insertionsort(v);
	insertionsortwithbuf(v);
	// bubblesort(v);
}
