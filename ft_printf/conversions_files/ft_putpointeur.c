/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointeur.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:16:03 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/08 10:04:00 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

int	ft_check_min_champs_putpointeur(t_arg elem, void *ptr)
{
	int	i;

	i = ft_check_flags_putpointeur(elem, ptr, 0);
	elem.precision -= i;
	if (elem.precision > 0)
	{	if (ptr != 0)
			elem.min_champs -= i + elem.precision + 2;
		else
			elem.min_champs -= i + elem.precision;
	}
	else
	{
		if (ptr != 0)
			elem.min_champs -= i + 2;
		else
			elem.min_champs -= i;
	}
	return (ft_check_flags_putpointeur(elem, ptr, 1));
}

int	ft_check_flags_putpointeur(t_arg elem, void	*ptr, int print)
{
	int	i;

	i = 0;
	if (elem.f_plus == 1 && ptr != 0)
	{
		if (print)
			write (1, "+", 1);
		i = 1;
	}
	else if (elem.f_space == 1 && ptr != 0)
	{
		if (print)
			write (1, " ", 1);
		i = 1;
	}
	if (ptr == 0)
		elem.f_zero = 0;
	if (elem.f_minus == 0)
	{
		if (print && ptr != 0 && elem.f_zero == 1)
			write(1, "0x", 2);
		if (print)
			i += ft_print_minchamps(elem);
		if (print && ptr != 0 && elem.f_zero == 0)
			write(1, "0x", 2);
		if (print && ptr != 0)
			i += ft_print_precision(elem);
		i += ft_putpointeur(ptr, print);
	}
	else
	{
		if (print && ptr != 0)
			write(1, "0x", 2);
		if (print && ptr != 0)
			i += ft_print_precision(elem);
		i += ft_putpointeur(ptr, print);
		if (print)
			i += ft_print_minchamps(elem);
	}
	if (!print && ptr != 0)
		i -= 2;
	return (i);
}

static void	ft_writepointeur(unsigned long addr, int *i, int print)
{
	if (addr > 15)
		ft_writepointeur(addr / 16, i, print);
	if  (print)
		ft_putchar((char)(BASE_HEXA_MIN[addr % 16]), print);
	*i += 1;
}

int	ft_putpointeur(void	*p, int print)
{
	int				i;
	unsigned long	addr;

	i = 0;
	if (p == 0)
	{
		if (print == 1)
			write(1, "(nil)", 5);
		return (5);
	}
	addr = (unsigned long)p;
	ft_writepointeur(addr, &i, print);
	return (i + 2);
}
