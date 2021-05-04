/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_node_is_sorted.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 19:48:09 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 12:45:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks if the list is sorted or not.
**	If sorted in ascending order, -1 is returned.
**	If data is equal or only list has size 1, -1 is returned.
**	If not sorted, 0 is returned.
**	If sorted in descending order, 1 is returned.
*/

static int	check_ascending(t_node *prev, t_node *tmp, int (*cmp)())
{
	int	ret;

	while (tmp)
	{
		ret = cmp(prev->content, tmp->content);
		if (ret > 0)
			return (0);
		prev = tmp;
		tmp = tmp->next;
	}
	return (-1);
}

static int	check_descending(t_node *prev, t_node *tmp, int (*cmp)())
{
	int	ret;

	while (tmp)
	{
		ret = cmp(prev->content, tmp->content);
		if (ret < 0)
			return (0);
		prev = tmp;
		tmp = tmp->next;
	}
	return (1);
}

int	ft_node_is_sorted(t_node **head, int (*cmp)())
{
	int		ret;
	t_node	*tmp;
	t_node	*prev;

	prev = *head;
	tmp = (*head)->next;
	while (tmp)
	{
		ret = cmp(prev->content, tmp->content);
		if (ret < 0)
			return (check_ascending(prev->next, tmp->next, *cmp));
		if (ret > 0)
			return (check_descending(prev->next, tmp->next, *cmp));
		prev = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
