/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   display_stacks.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/28 14:28:25 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/05 16:11:00 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include "../header.h"


void	print_line(t_node *n_a, t_node *n_b)
{
	if (n_a)
		dprintf(2, "\t[%6s]", n_a->content);
	else
		dprintf(2, "\t[      ]");
	if (n_b)
		dprintf(2, "\t[%6s]", n_b->content);
	else
		dprintf(2, "\t[      ]");
}
void	print_stacks(t_vars *v, char *next_cmd)
{
	t_node	*n_a;
	t_node	*n_b;
	n_a = v->a;
	n_b = v->b;
	// usleep(850000);
	// dprintf(2, "\E[H\E[2J");
	dprintf(2, "           stack A         stack B\n");
	dprintf(2, "cmd:[%s]\n", next_cmd);
	while (n_a || n_b)
	{
		print_line(n_a, n_b);
		if (n_a)
			n_a = n_a->next;
		if (n_b)
			n_b = n_b->next;
		dprintf(2, "\n");
	}
//	dprintf(2, "\E[H\E[2J");
}