/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_smallest_num.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 14:06:12 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 14:09:11 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int get_smallest_num(t_node *list)
{
	int num;

	num = ft_atoi(list->content);
	while (list)
	{
		if (ft_atoi(list->content) < num)
			num = ft_atoi(list->content);
		list = list->next;
	}
	return (num);
}