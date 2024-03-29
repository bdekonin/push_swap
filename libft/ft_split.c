/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 16:18:24 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 13:25:36 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	temp_size;
	char	sep[2];

	sep[0] = c;
	sep[1] = '\0';
	return (ft_split_sep(s, sep, &temp_size));
}
