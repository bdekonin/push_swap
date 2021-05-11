/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:31:29 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 14:35:42 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	pa(t_vars *v)
{
	t_node	*tmp;

	if (!v->b)
		return ;
	tmp = v->b;
	ft_node_unlink(&v->b, v->b);
	ft_node_add_front(&v->a, tmp);
}

void	pb(t_vars *v)
{
	t_node	*tmp;

	if (!v->a)
		return ;
	tmp = v->a;
	ft_node_unlink(&v->a, v->a);
	ft_node_add_front(&v->b, tmp);
}
