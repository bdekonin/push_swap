/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solver.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 21:33:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/01 13:44:53 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"
void listprinter(t_vars *v);

void solve(t_vars *v)
{
	// insertionsort(v);
	bubblesort(v);
}
