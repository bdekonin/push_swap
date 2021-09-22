/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   five_numbers.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/22 08:51:06 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/22 13:04:05 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	findNum(t_vars *v, int num, int buf);

void	five_numbers(t_vars *v)
{

    // printf("[%d]\n", (int)ft_node_size(v->a));

    while (ft_node_size(v->a) > 3)
    {
        findNum(v, get_biggest_num(v->a), 0);
        caller(v, PB);        
    }
    write(2, "\t\tStart\n", 8);
    three_numbers(v);
    write(2, "\t\tStop\n", 7);
    
    caller(v, PA);
    caller(v, RA);

    caller(v, PA);
    caller(v, RA);
}
