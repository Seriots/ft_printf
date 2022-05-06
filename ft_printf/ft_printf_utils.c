/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:00:48 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/06 14:52:46 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_power(int value, int power)
{
	if (power < 0)
		return (1 / ft_power(value, -power));
	if (power == 0)
		return (1);
	return (value * (ft_power(value, power - 1)));
}

int	ft_is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i ++;
	}
	return (-1);
}

void	ft_setzero(int flags[5])
{
	int	i;

	i = -1;
	while (++i < 5)
		flags[i] = 0;
}

int	ft_convert_flags(int flags[5])
{
	int	i;
	int	result;

	i = -1;
	result = 0;
	while (++i < 5)
	{
		if (flags[i] == 1)
			result += ft_power(2, i);
		flags[i] = 0;
	}
	return (result);
}
