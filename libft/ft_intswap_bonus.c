/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intswap_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:29:58 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 14:30:13 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void    ft_intswap(int *x,int *y)
{
    int t;

    t   = *x;
    *x   = *y;
    *y   =  t;
}