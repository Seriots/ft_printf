/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_components.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:35:57 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/06 22:14:05 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "conversions_files/conversion.h"
#include "libft/libft.h"

t_arg	ft_check_precision(const char *s, int *i, t_arg elem)
{
	if (s[*i] == '.' && ft_isdigit(s[*i + 1]))
	{
		elem.precision = 0;
		while (ft_isdigit(s[++(*i)]))
			elem.precision = (elem.precision * 10) + (s[*i] - 48);
	}
	if (s[*i + 1] == '-')
	{
		*i += 2;
		while (ft_isdigit(s[*i]))
			*i += 1;
	}
	return (elem);
}

t_arg	ft_parse(const char *s, int *position)
{
	int		i;
	int		flags[5];
	t_arg	elem;

	i = *position;
	ft_setzero(flags);
	elem.min_champs = 0;
	elem.precision = -1;
	while (ft_is_base(s[++i], FLAG_BASE) != -1 && s[i])
		flags[ft_is_base(s[i], FLAG_BASE)] = 1;
	elem = ft_convert_flags(flags, elem);
	i -= 1;
	while (ft_isdigit(s[++i]))
		elem.min_champs = (elem.min_champs * 10) + (s[i] - 48);
	elem = ft_check_precision(s, &i, elem);
	if (ft_is_base(s[i], ATTRIBUT_BASE) != -1)
		elem.attribut = s[i++];
	else
		elem.attribut = 0;
	*position = i - 1;
	return (elem);
}

int	ft_printf_args(t_arg element, va_list ap)
{
	int	i;

	i = 0;
	if (element.attribut == 'd' || element.attribut == 'i')
		ft_check_flags_putnbr(element, va_arg(ap, int), &i);
	else if (element.attribut == 'c')
		i = ft_putchar((char)va_arg(ap, int));
	else if (element.attribut == 's')
		i = ft_putstr(va_arg(ap, char *), element.precision);
	else if (element.attribut == 'p')
		i = ft_putpointeur((void *)va_arg(ap, void *));
	else if (element.attribut == 'u')
		ft_putnbr_unsigned((unsigned int)va_arg(ap, unsigned int), &i);
	else if (element.attribut == 'x')
		ft_puthexa_min((unsigned int)va_arg(ap, unsigned int), &i);
	else if (element.attribut == 'X')
		ft_puthexa_maj((unsigned int)va_arg(ap, unsigned int), &i);
	else if (element.attribut == '%')
	{
		write(1, "%", 1);
		i = 1;
	}
	return (i);
}

int	ft_check_parse(t_arg element, va_list ap, int *i, const char *s)
{
	int	tmp;
	int	count;

	count = 0;
	tmp = *i;
	element = ft_parse(s, i);
	if (element.attribut == 0)
	{
		write(1, "%", 1);
		*i = tmp;
		count ++;
	}
	else
		count += ft_printf_args(element, ap);
	return (count);
}

int	ft_printfwork(va_list ap, const char *s)
{
	int		i;
	int		count;
	t_arg	element;
	int		test;

	i = 0;
	count = 0;
	while (s[i])
	{
		//ft_putnbr(i, &test);
		if (s[i] == '%')
			count += ft_check_parse(element, ap, &i, s);
		else
		{
			write(1, &s[i], 1);
			count ++;
		}
		if (s[i])
			i ++;
	}
	return (count);
}
