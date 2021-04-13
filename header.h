/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 16:34:11 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/08 15:11:28 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef HEADER_HPP
# define HEADER_HPP

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "libft/includes/libft.h"
#include "libft/includes/ft_node.h"
#include "libft/includes/get_next_line.h"

typedef struct		s_vars
{
	t_node			*a;
	t_node			*b;
	size_t			steps;
}					t_vars;

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

/*
** Operations
*/

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

void caller(t_vars *v, size_t command); // Calls Command (v, DEFINE command)



/*
** Utils
*/

int		issorted(t_node*head);
void	print_stacks(t_vars *v, char *next_cmd);
int		create_stacks(t_vars *v, int argc, char **argv);




#endif // HEADER_HPP