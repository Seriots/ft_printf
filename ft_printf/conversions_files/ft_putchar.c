/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:04:18 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/06 14:13:07 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
