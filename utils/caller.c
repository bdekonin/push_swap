/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   caller.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:35:54 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 14:41:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void caller(t_vars *v, size_t command)
{
	t_struct s;

	ft_bzero(&s, sizeof(t_struct));
	createfunctionarray(&s);
	createstringarray(&s);

	ft_putendl_fd(s.a[command], 1);
	(*s.p[command])(v);
}
