/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_abs_bonus.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/15 22:42:30 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/14 21:43:24 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int x)
{
	if (x < 0)
		x *= -1;
	return (x);
}