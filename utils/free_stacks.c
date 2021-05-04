/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_stacks.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/22 11:34:28 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/22 13:24:30 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	free_stacks(t_node **a, t_node **b, int ret)
{
	ft_node_del_all(a, free);
	ft_node_del_all(b, free);
	return (ret);
}
