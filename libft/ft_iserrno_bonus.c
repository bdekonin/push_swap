/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iserrno_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/09 16:12:20 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 13:17:09 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

int	ft_iserrno(int error)
{
	if (errno == error)
		return (1);
	else
		return (0);
}
