/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atod.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 15:56:18 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 13:13:18 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static double	read_decimals(const char *str)
{
	double	result;
	double	magnitude;
	size_t	i;

	result = 0;
	magnitude = 1;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		magnitude = magnitude * 10;
		i++;
	}
	result = result / magnitude;
	return (result);
}

double	ft_atod(const char *str)
{
	double	result;
	int		neg;
	size_t	i;

	result = 0;
	neg = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	if (str[i] == '.')
		result += read_decimals(str + i + 1);
	result = result * neg;
	return (result);
}
