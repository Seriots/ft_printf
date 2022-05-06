/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:49:39 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/06 14:05:04 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

void	ft_puthexa_min(unsigned int n, int *i)
{
	if (n > 15)
		ft_puthexa_min(n / 16, i);
	ft_putchar((char)(BASE_HEXA_MIN[n % 16]));
	*i += 1;
}

void	ft_puthexa_maj(unsigned int n, int *i)
{
	if (n > 15)
		ft_puthexa_maj(n / 16, i);
	ft_putchar((char)(BASE_HEXA_MAJ[n % 16]));
	*i += 1;
}
