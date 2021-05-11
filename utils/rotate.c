/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:32:09 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 14:36:19 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ra(t_vars *v)
{
	t_node	*tmp;

	if (!v->a)
		return ;
	tmp = v->a;
	ft_node_unlink(&v->a, v->a);
	ft_node_add_back(&v->a, tmp);
}

void	rb(t_vars *v)
{
	t_node	*tmp;

	if (!v->b)
		return ;
	tmp = v->b;
	ft_node_unlink(&v->b, v->b);
	ft_node_add_back(&v->b, tmp);
}

void	rr(t_vars *v)
{
	ra(v);
	rb(v);
}
