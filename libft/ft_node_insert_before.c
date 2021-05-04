/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_node_insert_before.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 23:35:52 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 12:45:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_node_insert_before(t_node **head, t_node *node, t_node *before_this)
{
	if (!before_this)
	{
		ft_node_add_back(head, node);
		return ;
	}	
	if (before_this == *head)
	{
		ft_node_add_front(head, node);
		return ;
	}
	node->prev = before_this->prev;
	node->next = before_this;
	before_this->prev = node;
	node->prev->next = node;
}
