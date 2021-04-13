/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/08 10:27:12 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/13 18:52:59 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

#include "../header.h"

typedef struct		s_list
{
	void	(*p[11]) (t_vars *v);
	t_vars	vars;
}					t_list;


#endif // MAIN_HPP
