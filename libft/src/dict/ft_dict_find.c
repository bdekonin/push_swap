/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dict_find.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <lverdoes@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 08:13:32 by lverdoes      #+#    #+#                 */
/*   Updated: 2021/04/08 11:02:30 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

t_dict	*ft_dict_find(t_dict *head, char *key)
{
	int		i;
	t_dict	*tmp;

	if (!key)
		return (NULL);
	i = 0;
	tmp = head;
	while (key[i])
	{
		if (tmp && tmp->dict[(int)key[i]])
		{
			tmp = tmp->dict[(int)key[i]];
			i++;
		}
		else
			return (NULL);
	}
	return (tmp);
}
