/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointeur.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:16:03 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/06 14:13:18 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

static void	ft_writepointeur(unsigned long addr, int *i)
{
	if (addr > 15)
		ft_writepointeur(addr / 16, i);
	ft_putchar((char)(BASE_HEXA_MIN[addr % 16]));
	*i += 1;
}

int	ft_putpointeur(void	*p)
{
	int				i;
	unsigned long	addr;

	i = 0;
	if (p == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	addr = (unsigned long)p;
	ft_writepointeur(addr, &i);
	return (i + 2);
}

/*int		main(void)
{
	char	*s;
	
	s = malloc(1);
	printf("%p\n", s);
	ft_putpointeur(s);
}*/