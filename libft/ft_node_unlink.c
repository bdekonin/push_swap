/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_node_unlink.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 23:36:08 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 12:45:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	is_middle(t_node *node)
{
	node->prev->next = node->next;
	node->next->prev = node->prev;
}

static void	is_last(t_node *node)
{
	node->prev->next = NULL;
}

static void	is_head(t_node **head, t_node *node)
{
	*head = node->next;
	if (*head)
		(*head)->prev = NULL;
}

t_node	*ft_node_unlink(t_node **head, t_node *node)
{
	if (!node->prev)
		is_head(head, node);
	else if (!node->next)
		is_last(node);
	else
		is_middle(node);
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
