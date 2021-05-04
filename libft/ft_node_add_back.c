/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_node_add_back.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 23:27:58 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 12:45:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_node_add_back(t_node **head, t_node *new)
{
	t_node	*tmp;

	if (!*head)
		ft_node_add_front(head, new);
	else
	{
		tmp = ft_node_last(*head);
		tmp->next = new;
		new->prev = tmp;
	}
}
