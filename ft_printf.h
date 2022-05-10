/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:24:27 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/10 13:58:00 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# define BASE_HEXA_MIN "0123456789abcdef"
# define BASE_HEXA_MAJ "0123456789ABCDEF"
# define FLAG_BASE "0 +-#"
# define ATTRIBUT_BASE "cspdiuxX%"

typedef struct s_arg
{
	int		f_zero;
	int		f_space;
	int		f_plus;
	int		f_minus;
	int		f_hashtag;
	int		min_champs;
	int		precision;
	int		precision_detected;
	char	attribut;
}			t_arg;

/*ft_printf*/
int		ft_printf(const char *s, ...);

/*ft_printf_components*/
int		ft_check_parse(t_arg element, va_list ap, int *i, const char *s);
int		ft_printfwork(va_list ap, const char *s);
t_arg	ft_parse(const char *s, int *position);
int		ft_printf_args(t_arg element, va_list ap);

/*ft_printf_utils*/
int		ft_is_base(char c, char *base);
int		ft_power(int value, int power);
t_arg	ft_convert_flags(int flags[5], t_arg elem0);
void	ft_setzero(int flags[5]);
int		ft_print_minchamps(t_arg elem);
int		ft_print_precision(t_arg elem);
int		ft_abs(int n);

/*ft_putchar.c*/
int		ft_check_putchar(t_arg elem, char c);
int		ft_check_flags_putchar(t_arg elem, char c, int print);
int		ft_putchar(char c, int print);

/*ft_putstr.c*/
int		ft_check_putstr(t_arg elem, char *s);
int		ft_check_flags_putstr(t_arg elem, char *s, int print);
int		ft_putstr(const char *s, t_arg elem, int print);

/*ft_putnbr.c*/
void	ft_check_flags_putnbr2(int *i, t_arg elem, int n, int print);
void	ft_check_flags_putnbr3(int *i, t_arg elem, int n, int print);
int		ft_check_putnbr(t_arg elem, int n);
int		ft_check_flags_putnbr(t_arg elem, int n, int print);
void	ft_putnbr(int n, int *i, int print);

/*ft_putnbr_unsigned.c*/
int		ft_check_putnbrunsigned(t_arg elem, unsigned int n);
int		ft_check_flags_putnbr_unsigned(t_arg elem, unsigned int n, int print);
void	ft_putnbr_unsigned(unsigned int n, int *i, int print);

/*ft_putpointeur.c*/
int		ft_check_putpointeur(t_arg elem, void *ptr);
void	ft_check_flags_putpointeur3(int *i, void *ptr, int print, t_arg elem);
void	ft_check_flags_putpointeur2(int *i, void *ptr, int print, t_arg elem);
int		ft_check_flags_putpointeur(t_arg elem, void	*ptr, int print);
void	ft_writepointeur(unsigned long addr, int *i, int print);
int		ft_putpointeur(void	*p, int print);

/*ft_puthexa_maj.c*/
int		ft_check_puthexa_maj(t_arg elem, unsigned int n);
void	ft_check_puthexa_maj2(int *i, t_arg elem, unsigned int n, int print);
int		ft_check_flags_puthexa_maj(t_arg elem, unsigned int n, int print);
void	ft_puthexa_maj(unsigned int n, int *i, int print);

/*ft_puthexa_min.c*/
int		ft_check_puthexa_min(t_arg elem, unsigned int n);
void	ft_check_puthexa_min2(int *i, t_arg elem, unsigned int n, int print);
int		ft_check_flags_puthexa_min(t_arg elem, unsigned int n, int print);
void	ft_puthexa_min(unsigned int n, int *i, int print);

#endif
