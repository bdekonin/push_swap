/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_node_join.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 10:18:15 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 12:45:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_node_join(t_node *left, t_node *right)
{
	left->next = right;
	right->prev = left;
}
