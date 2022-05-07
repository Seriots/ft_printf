/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:39:41 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/07 10:34:35 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"
#include "../ft_printf.h"
#include "../libft/libft.h"

void	ft_check_flags_putnbr(t_arg elem, int n, int *i, int print)
{
	if (elem.f_plus == 1)
	{
		if (print)
			write (1, "+", 1);
		*i += 1;
	}
	else if (elem.f_space == 1)
	{
		if (print)
			write (1, " ", 1);
		*i += 1;
	}
	ft_putnbr(n, i, print);
}

void	ft_putnbr(int n, int *i, int print)
{
	if (n == -2147483648)
	{
		if (print)
			ft_putstr("-2147483648", 11, print);
		*i += 11;
		return ;
	}
	if (n < 0)
	{
		n = -n;
		if (print)
			write(1, "-", 1);
		*i += 1;
	}
	if (n > 9)
		ft_putnbr(n / 10, i, print);
	if (print)
		ft_putchar((char)((n % 10) + 48), print);
	*i += 1;
}

void	ft_putnbr_unsigned(unsigned int n, int *i, int print)
{
	if (n > 9)
		ft_putnbr_unsigned(n / 10, i, print);
	if (print)
		ft_putchar((char)((n % 10) + 48), print);
	*i += 1;
}
