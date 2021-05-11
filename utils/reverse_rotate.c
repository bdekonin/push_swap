/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:33:41 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 14:36:00 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	rra(t_vars *v)
{
	t_node	*temp;
	t_node	*last;

	if (!v->a || !v->a->next)
		return ;
	temp = ft_node_last(v->a);
	last = temp->prev;
	ft_node_unlink(&v->a, temp);
	ft_node_add_front(&v->a, temp);
}

void	rrb(t_vars *v)
{
	t_node	*temp;
	t_node	*last;

	if (!v->b || !v->b->next)
		return ;
	temp = ft_node_last(v->b);
	last = temp->prev;
	ft_node_unlink(&v->b, temp);
	ft_node_add_front(&v->b, temp);
}

void	rrr(t_vars *v)
{
	rra(v);
	rrb(v);
}
