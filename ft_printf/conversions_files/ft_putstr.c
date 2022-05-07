/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:43:35 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/07 10:07:17 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

int	ft_putstr(const char *s, int champ, int print)
{
	int	i;

	i = -1;
	if (s == 0)
	{
		if (print)
			write(1, "(null)", 6);
		return (6);
	}
	if (champ != -1)
	{
		while (s[++i] && i < champ)
			if (print)
				write(1, &s[i], 1);
	}
	else
	{
		while (s[++i])
			if (print)
				write(1, &s[i], 1);
	}
	return (i);
}
