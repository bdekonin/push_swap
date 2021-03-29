/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   issorted.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 21:30:27 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/03/18 22:26:17 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int issorted(t_node*head)
{
	while (head->next)
	{
		if (ft_atoi(head->content) <= ft_atoi(head->next->content))
			head = head->next;
		else
			return(0);
	}
	return(1);
}