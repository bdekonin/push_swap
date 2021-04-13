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

#include "../header.h"

void solver(t_vars *v);

/*
** Sorting Algorithems
*/

void insertionsort(t_vars *v);
// void insertionsortwithbuf(t_vars *v);
void insertionsortwithbuf(t_vars *v, int bereik);




#endif // MAIN_HPP