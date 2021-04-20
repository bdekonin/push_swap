/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 13:23:22 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/04/20 13:30:19 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int argc, char **argv)
{
	t_vars v;
	int ret;

	ft_bzero(&v, sizeof(t_vars));
	ret = create_stacks(&v, argc, argv);
	if (ret != 0)
	{
		ft_putendl_fd("Error\n", 1);
		ft_node_del_all(&v.a, free);
		ft_node_del_all(&v.b, free);
		return (ret);
	}

	solver(&v);
	ft_node_del_all(&v.a, free);
	ft_node_del_all(&v.b, free);
	return (0);
}
