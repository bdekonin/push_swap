/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsearch_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/13 13:10:29 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 13:10:44 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strsearch(char *line, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (line[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[j] == line[i])
				break ;
			j++;
			if (str[j] == '\0')
				return (0);
		}
		i++;
	}
	return (i);
}

int	ft_strsearch_bool(char *line, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (line[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[j] == line[i])
				break ;
			j++;
			if (str[j] == '\0')
				return (0);
		}
		i++;
	}
	return (1);
}
