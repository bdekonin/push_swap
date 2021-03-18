/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:36:08 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/03/17 21:35:53 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"

#include "debug-utils/debug_utils.h"

typedef struct		s_vars
{
	t_list			*a;
	t_list			*b;
}					t_vars;

int issorted(t_list *head);
void solve(t_vars *v);


void sa(t_vars *v);
void sb(t_vars *v);
void ss(t_vars *v);

void pa(t_vars *v);
void pb(t_vars *v);

void ra(t_vars *v);
void rb(t_vars *v);
void rr(t_vars *v);

void rra(t_vars *v);
void rrb(t_vars *v);
void rrr(t_vars *v);

#endif // MAIN_HPP