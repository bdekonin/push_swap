/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:36:08 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 14:06:30 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../header.h"

/*
** Solver makes calls to sorting algorithems
*/
void	solver(t_vars *v);

/*
** Sorting Algorithems
*/
void	two_numbers(t_vars *v);
void	three_numbers(t_vars *v);
void	insertionsortwithbuf(t_vars *v, int bereik);

#endif // MAIN_H
