/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:35:54 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/03/18 13:32:10 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

static t_list *ft_lstgetbefore(t_list *head, t_list *before)
{
	while (head)
	{
		if (head->next == before)
			return (head);
		head = head->next;
	}
	return (NULL);
}

static void kaas(int *x,int *y) // swapper
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

void	ft_node_add_front(t_list **head, t_list *new)
{
	new->next = *head;
	*head = new;
}


void sa(t_vars *v) // swap a - swap the first 2 elements at the top of stack a
{
	if (!v->a || ft_lstsize(v->a) == 1)
		return ;
	kaas(v->a->content, v->a->next->content);
}
void sb(t_vars *v) // swap b - swap the first 2 elements at the top of stack b
{
	if (!v->b || ft_lstsize(v->b) == 1)
		return ;
	kaas(v->b->content, v->b->next->content);
}
void ss(t_vars *v) // sa and sb at the same time.
{
	sa(v);
	sb(v);
}

void pa(t_vars *v) // push a - take the first element at the top of b and put it at the top of a
{
	t_list *temp;
	if (!v->b)
		return ;

	temp = v->b->next;
	ft_node_add_front(&v->a, v->b);
	v->b = temp;
}
void pb(t_vars *v) // push b - take the first element at the top of a and put it at the top of b
{
	ft_putendl_fd("pb", 1);
	t_list *temp;
	if (!v->a)
		return ;

	temp = v->a->next;
	ft_node_add_front(&v->b, v->a);
	v->a = temp;
}

void ra(t_vars *v) // rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
{
	ft_putendl_fd("ra", 1);
	t_list *temp;
	t_list *last;

	temp = v->a;
	last = ft_lstlast(v->a);
	v->a = v->a->next;
	last->next = temp;
	temp->next = NULL;
	
}
void rb(t_vars *v) // rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
{
	t_list *temp;
	t_list *last;

	temp = v->b;
	last = ft_lstlast(v->b);
	v->b = v->b->next;
	last->next = temp;
	temp->next = NULL;
}
void rr(t_vars *v) // ra and rb at the same time.
{
	ra(v);
	rb(v);
}

void rra(t_vars *v) // reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
{
	t_list *last;

	last = ft_lstlast(v->a);

	ft_lstgetbefore(v->a, ft_lstlast(v->a))->next = NULL;
	
	ft_lstmove_front(&v->a, last);
}
void rrb(t_vars *v) // reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
{
	t_list *last;

	last = ft_lstlast(v->b);

	ft_lstgetbefore(v->b, ft_lstlast(v->b))->next = NULL;
	
	ft_lstmove_front(&v->b, last);
}
void rrr(t_vars *v) // rra and rrb at the same time.
{
	rra(v);
	rrb(v);
}