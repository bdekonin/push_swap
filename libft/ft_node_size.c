/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_node_size.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 00:18:35 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 12:45:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_node_size(t_node *node)
{
	size_t	ret;
	t_node	*tmp;

	ret = 0;
	tmp = node;
	while (tmp)
	{
		tmp = tmp->next;
		ret++;
	}
	return (ret);
}
