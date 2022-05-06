/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:43:35 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/06 14:11:05 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

int	ft_putstr(const char *s, int champ)
{
	int	i;

	i = -1;
	if (s == 0)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (champ != -1)
	{
		while (s[++i] && i < champ)
			write(1, &s[i], 1);
	}
	else
	{
		while (s[++i])
			write(1, &s[i], 1);
	}
	return (i);
}
