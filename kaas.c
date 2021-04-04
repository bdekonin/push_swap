/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   kaas.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <lverdoes@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/28 14:28:25 by lverdoes      #+#    #+#                 */
/*   Updated: 2021/03/30 10:29:18 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include "main.h"

void	print_line(t_node *n_a, t_node *n_b)
{
	if (n_a)
		printf("\t[%6s]", n_a->content);
	else
		printf("\t[      ]");
	if (n_b)
		printf("\t[%6s]", n_b->content);
	else
		printf("\t[      ]");
}
void	print_stacks(t_vars *v, char *next_cmd)
{
	t_node	*n_a;
	t_node	*n_b;
	n_a = v->a;
	n_b = v->b;
	usleep(850000);
	printf("\E[H\E[2J");
	printf("           stack A         stack B\n");
	printf("cmd:[%s]\n", next_cmd);
	while (n_a || n_b)
	{
		print_line(n_a, n_b);
		if (n_a)
			n_a = n_a->next;
		if (n_b)
			n_b = n_b->next;
		printf("\n");
	}
//	printf("\E[H\E[2J");
}