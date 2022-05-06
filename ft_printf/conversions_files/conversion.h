/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:20:08 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/06 14:11:34 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H
# define BASE_HEXA_MIN "0123456789abcdef"
# define BASE_HEXA_MAJ "0123456789ABCDEF"
# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_putstr(const char *s, int champ);
void	ft_putnbr(int n, int *i);
void	ft_putnbr_unsigned(unsigned int n, int *i);
int		ft_putpointeur(void	*p);
void	ft_puthexa_min(unsigned int n, int *i);
void	ft_puthexa_maj(unsigned int n, int *i);
#endif