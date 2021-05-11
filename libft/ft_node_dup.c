/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_node_dup.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/05 11:55:57 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 13:37:09 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_node	*clean_up(t_node *dup_h, t_node *dup_c, void (*del)(void *))
{
	if (dup_c)
		del(dup_c);
	ft_node_del_all(&dup_h, del);
	return (NULL);
}

t_node	*ft_node_dup(t_node *head, void *(*dup)(void *), void (*del)(void *))
{
	t_node	*dup_head;
	void	*dup_content;
	t_node	*new;
	t_node	*tmp;

	dup_head = NULL;
	tmp = head;
	while (tmp)
	{
		dup_content = dup(tmp->content);
		if (!dup_content)
			return (clean_up(dup_head, dup_content, del));
		new = ft_node_new(dup_content);
		if (!new)
			return (clean_up(dup_head, dup_content, del));
		ft_node_add_back(&dup_head, new);
		tmp = tmp->next;
	}
	return (dup_head);
}
