/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   two_numbers.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 12:55:46 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 13:56:32 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void 	two_numbers(t_vars *v)
{
	if (!issorted(v->a))
		caller(v, SA);
}
