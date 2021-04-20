/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/08 10:27:12 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/19 09:17:16 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

#include "../header.h"

# define OPERATIONS_MAX 11

typedef struct		s_list
{
	void	(*p[OPERATIONS_MAX + 1]) (t_vars *v);
	char	*a[OPERATIONS_MAX];
	t_vars	vars;
}					t_list;


#endif // MAIN_HPP
