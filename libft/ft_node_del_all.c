/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_node_del_all.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 23:36:17 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/29 12:45:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Delete the complete linked list.
**
**	Example of a DEL() function with a struct t_var:
**
**	typedef struct	s_var{
**		int			value;
**		char		*str;
**	}				t_var;
**	
**	void	del_var(void *var)
**	{
**		t_var *tmp;
**		
**		tmp = var;
**		free(tmp->str);
**		free(tmp);
**	}
**
**	Calling		'ft_node_del_all(&head, del_var);'	will delete the list
**
*/

void	ft_node_del_all(t_node **head, void (*del)(void *))
{
	t_node	*tmp;
	t_node	*start;

	if (!head)
		return ;
	start = *head;
	while (start)
	{
		tmp = start;
		start = start->next;
		ft_node_del_one(tmp, del);
	}
	*head = NULL;
}
