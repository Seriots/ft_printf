/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:24:27 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/06 14:51:47 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define FLAG_BASE "0 +-#"
#define ATTRIBUT_BASE "cspdiuxX%"

typedef	struct s_arg
{
	int		flags;
	int		min_champs;
	int		precision;
	char	attribut;
} t_arg;

/*ft_printf*/
int		ft_printf(const char *, ...);

/*ft_printf_components*/
int		ft_check_parse(t_arg element, va_list ap, int *i, const char *s);
int		ft_printfwork(va_list ap, const char *s);
t_arg	ft_parse(const char *s, int *position);
int		ft_printf_args(t_arg element, va_list ap);

/*ft_printf_utils*/
int		ft_is_base(char c, char *base);
int		ft_power(int value, int power);
int		ft_convert_flags(int flags[5]);
void	ft_setzero(int flags[5]);

# endif