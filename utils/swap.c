/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:31:06 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 14:43:40 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sa(t_vars *v)
{
	if (!v->a || ft_node_size(v->a) == 1)
		return ;
	ft_intswap(v->a->content, v->a->next->content);
}

void	sb(t_vars *v)
{
	if (!v->b || ft_node_size(v->b) == 1)
		return ;
	ft_intswap(v->b->content, v->b->next->content);
}

void	ss(t_vars *v)
{
	sa(v);
	sb(v);
}
