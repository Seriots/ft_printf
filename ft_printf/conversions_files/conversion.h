/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:20:08 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/06 22:15:48 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H
# define BASE_HEXA_MIN "0123456789abcdef"
# define BASE_HEXA_MAJ "0123456789ABCDEF"
# include "../ft_printf.h"

int		ft_putchar(char c);

int		ft_putstr(const char *s, int champ);

void	ft_check_flags_putnbr(t_arg elem, int n, int *i);
void	ft_putnbr(int n, int *i);
void	ft_putnbr_unsigned(unsigned int n, int *i);

int		ft_putpointeur(void	*p);

void	ft_puthexa_min(unsigned int n, int *i);
void	ft_puthexa_maj(unsigned int n, int *i);
#endif