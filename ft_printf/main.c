/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:18:24 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/08 12:12:21 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	//ft_putstr("la");
	//ft_printf("la %0--- --0 t", 24);
	//ft_printf("\n");
	//printf("la %0--- --0 t", 24);
	
	//ft_printf("\n");
	//printf("%015   -- + ++, non");
	char	*s = 0;
	char	*t = malloc(1);
	//ft_printf("oui", 1);
	//printf("%1 %d", 15, 9);
	/*ft_printf("c, a =%010.0c\n", 'a');
	ft_printf("s, alphabet =%010.0s\n","alphabeet");
	ft_printf("p, NULL =%.20p\n", s);
	ft_printf("p, un pointeur =%30.20p\n", t);
	ft_printf("d, 42 =%.20d\n", 99);
	ft_printf("i, 42 =%.20i\n", 1);
	ft_printf("u, 42 =%.20u\n", 1);
	ft_printf("X, 42 =%#30.20X\n", 0);
	ft_printf("x, 42 =%.20x\n", 1);*/
	ft_printf("%s\n", "test");

	/*printf("c, a =%.0c\n", 'a');
	printf("s, alphabet =%010.0s\n","alphabeet");
	printf("p, NULL =%.20p\n", s);
	printf("p, un pointeur =%30.20p\n", t);
	printf("d, 42 =%.0d\n",0);
	printf("i, 42 =%i\n", 0);
	printf("u, 42 =%.0iu\n", 0);
	printf("X, 42 =%#30.20X\n", 0);
	printf("x, 42 =%.20x\n", 1);*/
	printf("%s\n", "test");
}