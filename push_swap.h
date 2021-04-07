/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:36:08 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/06 14:48:38 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"
#include <stdlib.h>

typedef struct		s_vars
{
	t_node			*a;
	t_node			*b;
}					t_vars;

int issorted(t_node*head);
void solve(t_vars *v);


#define SA 0
#define SB 1
#define SS 2

#define PA 3
#define PB 4

#define RA 5
#define RB 6
#define RR 7

#define RRA 8
#define RRB 9
#define RRR 10

#define PRINT 0
#define PRINT2 1

void insertionsort(t_vars *v);
void insertionsortwithbuf(t_vars *v);

void caller(t_vars *v, size_t command);

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


void	print_stacks(t_vars *v, char *next_cmd);


#endif // MAIN_HPP