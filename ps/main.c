/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 13:23:22 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/04 15:13:42 by bdekonin      ########   odam.nl         */
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
		ft_putendl_fd("Error", 1);
		free_stacks_and_exit(&v.a, &v.b, EXIT_FAILURE);
	}
	solver(&v);
	free_stacks(&v.a, &v.b, 0);
	return (0);
}
