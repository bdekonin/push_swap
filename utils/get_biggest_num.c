/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_biggest_num.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 14:07:33 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 14:29:03 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	get_biggest_num(t_node *list)
{
	int	num;
	
	num = ft_atoi(list->content);
	while (list)
	{
		if (ft_atoi(list->content) > num)
			num = ft_atoi(list->content);
		list = list->next;
	}
	return (num);
}
