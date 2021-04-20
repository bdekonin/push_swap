/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 13:23:22 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/19 12:53:02 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int argc, char **argv)
{
	// close(1);
	
	t_vars v;
	ft_bzero(&v, sizeof(t_vars));
	create_stacks(&v, argc, argv);

	solver(&v);
	ft_node_del_all(&v.a, free);
	ft_node_del_all(&v.b, free);
}
