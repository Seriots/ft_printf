/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:04:18 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/08 14:57:33 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

int	ft_check_putchar(t_arg elem, char c)
{
	elem.min_champs -= ft_check_flags_putchar(elem, c, 0);
	return (ft_check_flags_putchar(elem, c, 1));
}

int	ft_check_flags_putchar(t_arg elem, char c, int print)
{
	int	i;

	i = 0;
	if (elem.f_minus == 0)
	{
		if (print)
			i += ft_print_minchamps(elem);
		i += ft_putchar(c, print);
	}
	else
	{
		i += ft_putchar(c, print);
		if (print)
			i += ft_print_minchamps(elem);
	}
	return (i);
}

int	ft_putchar(char c, int print)
{
	if (print)
		write(1, &c, 1);
	return (1);
}
