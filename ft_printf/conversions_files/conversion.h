/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:20:08 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/08 12:17:28 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H
# define BASE_HEXA_MIN "0123456789abcdef"
# define BASE_HEXA_MAJ "0123456789ABCDEF"
# include "../ft_printf.h"

int		ft_check_min_champs_putchar(t_arg elem, char c);
int		ft_check_flags_putchar(t_arg elem, char c, int print);
int		ft_putchar(char c, int print);

int     ft_check_min_champs_putstr(t_arg elem, char *s);
int	    ft_check_flags_putstr(t_arg elem, char *s, int print);
int		ft_putstr(const char *s, t_arg elem, int print);

int	    ft_check_min_champs_putnbr(t_arg elem, int n);
int	    ft_check_flags_putnbr(t_arg elem, int n, int print);
void	ft_putnbr(int n, int *i, int print);

int	    ft_check_min_champs_putnbr_unsigned(t_arg elem, unsigned int n);
int     ft_check_flags_putnbr_unsigned(t_arg elem, unsigned int n, int print);
void	ft_putnbr_unsigned(unsigned int n, int *i, int print);

int		ft_check_min_champs_putpointeur(t_arg elem, void *ptr);
int		ft_check_flags_putpointeur(t_arg elem, void	*ptr, int print);
int		ft_putpointeur(void	*p, int print);

int     ft_check_min_champs_puthexa_maj(t_arg elem, unsigned int n);
int     ft_check_flags_puthexa_maj(t_arg elem, unsigned int n, int print);
int     ft_check_min_champs_puthexa_min(t_arg elem, unsigned int n);
int     ft_check_flags_puthexa_min(t_arg elem, unsigned int n, int print);
void	ft_puthexa_min(unsigned int n, int *i, int print);
void	ft_puthexa_maj(unsigned int n, int *i, int print);
#endif