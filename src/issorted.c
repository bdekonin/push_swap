/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   issorted.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 21:30:27 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/06 15:16:32 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int issorted(t_node *head)
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