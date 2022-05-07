/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:49:39 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/07 10:35:39 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

void	ft_check_flags_puthexamin(t_arg elem, unsigned int n, int *i, int print)
{
	if (elem.f_hashtag == 1 && n != 0)
	{
		if (print)
			write(1, "0x", 2);
		*i += 2;
	}
	ft_puthexa_min(n, i, print);
}

void	ft_check_flags_puthexamaj(t_arg elem, unsigned int n, int *i, int print)
{
	if (elem.f_hashtag == 1 && n != 0)
	{
		if (print)
			write(1, "0X", 2);
		*i += 2;
	}
	ft_puthexa_maj(n, i, print);
}

void	ft_puthexa_min(unsigned int n, int *i, int print)
{
	if (n > 15)
		ft_puthexa_min(n / 16, i, print);
	if (print)
		ft_putchar((char)(BASE_HEXA_MIN[n % 16]), print);
	*i += 1;
}

void	ft_puthexa_maj(unsigned int n, int *i, int print)
{
	if (n > 15)
		ft_puthexa_maj(n / 16, i, print);
	if (print)
		ft_putchar((char)(BASE_HEXA_MAJ[n % 16]), print);
	*i += 1;
}
