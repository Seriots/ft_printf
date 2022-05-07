/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:18:24 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/06 21:56:18 by lgiband          ###   ########.fr       */
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
	
	ft_printf("\n");
	//printf("%015   -- + ++, non");
	char	*s;
	//ft_printf("oui", 1);
	//printf("%1 %d", 15, 9);
	printf("c, a =% +c\n", 'a');
	printf("s, alphabet =% +s\n", "");
	printf("p, NULL =% +p\n", s);
	s = malloc(1);
	printf("p, un pointeur =% +p\n", s);
	printf("d, 42 =% +d\n", 99);
	printf("i, 42 =% +i\n", -42);
	printf("u, 42 =% +u\n", 42);
	printf("X, 42 =% +X\n", 975);
	printf("x, 42 =% +x\n", 9999);
	printf("%% = % +%\n");

	/*printf("o, 42 = %o\n", 42);
	printf("#o, 42 = %#o\n", 42);
	printf("#o, 42 = %0o\n", 4287488);
	printf("x, 42 = %x\n", 42);
	printf("#x, 42 = %#x\n", 42);
	printf("X, 42 = %X\n", 42);
	printf("#X, 42 = %#X\n", 42);
	printf("0X, 42 = %0X\n", 42);
	printf("#0X, 42 = %#0X\n", 42);
	printf("0d, 42 = %0d\n", 42);
	printf("0i, 42 = %0i\n", 42);*/
}