/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap_bonus.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/12 13:10:33 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 13:03:41 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(double *xp, double *yp)
{
	double	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}
