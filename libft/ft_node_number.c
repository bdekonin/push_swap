/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_node_number.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 00:19:16 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 12:45:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Return the node at index position number.
**	For number = 0, head is returned.
**	If number is out range, NULL is returned.
*/

t_node	*ft_node_number(t_node *node, size_t number)
{
	t_node	*tmp;
	size_t	i;

	tmp = node;
	i = 0;
	while (tmp)
	{
		if (i == number)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
