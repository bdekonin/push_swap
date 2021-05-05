/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:35:54 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/05 16:34:50 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void ft_inswap(int *x,int *y) // swapper
{
    int t;

    t   = *x;
    *x   = *y;
    *y   =  t;
}

void caller(t_vars *v, size_t command)
{
	t_struct s;

	ft_bzero(&s, sizeof(t_struct));
	createfunctionarray(&s);
	createstringarray(&s);

	ft_putendl_fd(s.a[command], 1);
	(*s.p[command])(v);
}

void sa(t_vars *v) // swap a - swap the first 2 elements at the top of stack a
{
	if (!v->a || ft_node_size(v->a) == 1)
		return ;
	ft_inswap(v->a->content, v->a->next->content);
}
void sb(t_vars *v) // swap b - swap the first 2 elements at the top of stack b
{
	if (!v->b || ft_node_size(v->b) == 1)
		return ;
	ft_inswap(v->b->content, v->b->next->content);
}

void ss(t_vars *v) // sa and sb at the same time.
{
	sa(v);
	sb(v);
}

void pa(t_vars *v) // push a - take the first element at the top of b and put it at the top of a
{
	t_node	*tmp;

	if (!v->b)
		return ;
	tmp = v->b;
	ft_node_unlink(&v->b, v->b);
	ft_node_add_front(&v->a, tmp);
}
void pb(t_vars *v) // push b - take the first element at the top of a and put it at the top of b
{
	t_node	*tmp;

	if (!v->a)
		return ;
	tmp = v->a;
	ft_node_unlink(&v->a, v->a);
	ft_node_add_front(&v->b, tmp);
}

void ra(t_vars *v) // rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
{
	t_node *tmp;
	if (!v->a)
		return ;
	tmp = v->a;
	ft_node_unlink(&v->a, v->a);
	ft_node_add_back(&v->a, tmp);
}
void rb(t_vars *v) // rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
{
	t_node *tmp;
	if (!v->b)
		return ;
	tmp = v->b;
	ft_node_unlink(&v->b, v->b);
	ft_node_add_back(&v->b, tmp);
}
void rr(t_vars *v) // ra and rb at the same time.
{
	ra(v);
	rb(v);
}

void rra(t_vars *v) // reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
{
	t_node *temp;
	t_node *last;

	if (!v->a || !v->a->next)
		return ;
	temp = ft_node_last(v->a);

	last = temp->prev;
	ft_node_unlink(&v->a, temp);
	ft_node_add_front(&v->a, temp);
}
void rrb(t_vars *v) // reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
{
	t_node *temp;
	t_node *last;

	if (!v->b || !v->b->next)
		return ;
	temp = ft_node_last(v->b);

	last = temp->prev;
	ft_node_unlink(&v->b, temp);
	ft_node_add_front(&v->b, temp);
}
void rrr(t_vars *v) // rra and rrb at the same time.
{
	rra(v);
	rrb(v);
}
