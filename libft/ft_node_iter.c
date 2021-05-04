/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_node_iter.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/01 10:04:31 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 12:45:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_node_iter(t_node *node, void (*f)(void *))
{
	t_node	*tmp;

	if (!f)
		return ;
	tmp = node;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
