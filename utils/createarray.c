/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   createarray.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 16:28:39 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/05 16:29:00 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void    createfunctionarray(t_struct *v)
{
	v->p[SA] = sa;
	v->p[SB] = sb;
	v->p[SS] = ss;
	v->p[PA] = pa;
	v->p[PB] = pb;
	v->p[RA] = ra;
	v->p[RB] = rb;
	v->p[RR] = rr;
	v->p[RRA] = rra;
	v->p[RRB] = rrb;
	v->p[RRR] = rrr;
}

void	createstringarray(t_struct *v)
{
	v->a[SA] = "sa";
	v->a[SB] = "sb";
	v->a[SS] = "ss";
	v->a[PA] = "pa";
	v->a[PB] = "pb";
	v->a[RA] = "ra";
	v->a[RB] = "rb";
	v->a[RR] = "rr";
	v->a[RRA] = "rra";
	v->a[RRB] = "rrb";
	v->a[RRR] = "rrr";
}
