/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:00:48 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/08 10:53:22 by lgiband          ###   ########.fr       */
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

t_arg	ft_convert_flags(int flags[5], t_arg elem)
{
	elem.f_zero = flags[0];
	elem.f_space = flags[1];
	elem.f_plus = flags[2];
	elem.f_minus = flags[3];
	elem.f_hashtag = flags[4];
	return (elem);
}

int	ft_print_minchamps(t_arg elem)
{
	int	i;

	i = 0;
	while (i < elem.min_champs)
	{
		if (elem.f_zero == 1 && elem.f_minus == 0 && elem.attribut != 'c' && elem.attribut != 's' && elem.precision_detected == 0)
			write(1, "0", 1);
		else
			write (1, " ", 1);
		i ++;
	}
	return (i);
}

int	ft_print_precision(t_arg elem)
{
	int i;

	i = 0;
	while (i < elem.precision)
	{
		write(1, "0", 1);
		i++;
	}
	return (i);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}