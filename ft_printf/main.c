/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:18:24 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/07 13:23:30 by lgiband          ###   ########.fr       */
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
	ft_printf("c, a =%-065c\n", 'a');
	ft_printf("s, alphabet =%050s\n","alphabeet");
	ft_printf("p, NULL =%010p\n", s);
	ft_printf("p, un pointeur =%0+30p\n", t);
	ft_printf("d, 42 =%.5d\n", 99);
	ft_printf("i, 42 =%.5i\n", -42);
	ft_printf("u, 42 =%.5u\n", 42);
	ft_printf("X, 42 =%.5X\n", 1);
	ft_printf("x, 42 =%.5x\n", 0);
	ft_printf("%% = %.5%\n");

	printf("c, a =%-065c\n", 'a');
	printf("s, alphabet =%050s\n","alphabeet");
	printf("p, NULL =%050p\n", s);
	printf("p, un pointeur =%050p\n", t);
	printf("d, 42 =%050d\n", 99);
	printf("i, 42 =%050i\n", -42);
	printf("u, 42 =%050u\n", 42);
	printf("X, 42 =%050X\n", 1);
	printf("x, 42 =%050x\n", 0);
	printf("%% = %050%\n");
}