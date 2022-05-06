/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 08:41:17 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/04 08:43:37 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/

/*main ft_memset*/
/*int main(void)
{
    int n = 10;
    int n2 = 10;
    
    void *first = malloc(sizeof(char) * n);
    void *second = malloc(sizeof(char) * n);
    char *result;
    char *result2;
    while (n > 0)
    {
        result2 = (char *)ft_memset(second, 97 + n, n);
        result = (char *)ft_memset(first, 65 + n, n);
        n--;
    }
    write(1, result, n2);
    write(1, "\n", 1);
    write(1, result2, n2);
    ft_memcpy((void *)result2, (const void *)result, n2 - 4);
    write(1, "\n", 1);
    write(1, "\n", 1);
    write(1, result, n2);
    write(1, "\n", 1);
    write(1, result2, n2);
}*/
/*end main ft_memset*/

/*main ft_memchr*/
/*#include <stdio.h>
int main(int argc, char *argv[])
{
    int result = ft_memcmp((const void *)argv[1], 
	(const void *)argv[2], ft_atoi(argv[3]));
    int result2 = memcmp((const void *)argv[1], 
	(const void *)argv[2], ft_atoi(argv[3]));
    printf("%d %d\n", result, result2);
}*/

/*main ft_substr*/
/*int main(int argc, char *argv[])
{
    char *s = ft_substr(argv[1], (unsigned int)ft_atoi(argv[2]), 
	ft_atoi(argv[3]));
    printf("%s\n", s);
}*/

/*main ft_isdigit*/
/*int main(int argc, char *argv[])
{
    if (ft_isalpha(argv[1][0]) == 0)
        write(1, "0\n", 2);
    else
         write(1, "1\n", 2);
}*/
/* end main ft_isdigit*/

/*main ft_isascii*/
/*int main(void)
{
    printf("%d %d\n", ft_isascii(256), isascii(256));
}*/
/* end main ft_isascii*/

/*main ft_isprint*/
/*int main(void)
{
    for (int i = 0; i < 130; i++)
        printf("%d %d\n", ft_isprint(i), isprint(i));
}*/
/* end main ft_isprint*/

/*main ft_strlen*/
/*int main(int argc, char *argv[])
{
    printf("%ld %ld", strlen(argv[1]), ft_strlen(argv[1]));
}*/
/* end main ft_strlen*/

/*main ft_tolower/upper*/
/*int main(int argc, char *argv[])
{
    printf("%d %d\n", toupper(argv[1][0]), ft_toupper(argv[1][0]));
    printf("%d %d\n", tolower(argv[1][0]), ft_tolower(argv[1][0]));
}*/
/* end main ft_tolower/upper*/

/*main ft_strchr*/
/*int main(int argc, char *argv[])
{
    printf("%s %s\n", strchr(argv[2] ,argv[1][0]), 
	ft_strchr(argv[2], argv[1][0]));
    printf("%s %s\n", strrchr(argv[2] ,argv[1][0]), 
	ft_strrchr(argv[2], argv[1][0]));
}*/
/* end main ft_strchr*/

/*main ft_strncmp*/
/*int main(int argc, char *argv[])
{
    printf("%d %d\n", strncmp(argv[1] ,argv[2], 5), 
	ft_strncmp(argv[1], argv[2], 5));
}*/
/* end main ft_strncmp*/

/*main ft_strnstr*/
/*#include <stdio.h>
int main(int argc, char *argv[])
{
    (void)argc;
    if (ft_strnstr(argv[1] ,argv[2], ft_strlen(argv[1])))
        printf("%s\n", ft_strnstr(argv[1] ,argv[2], ft_strlen(argv[1])));
    else
        printf("%p\n", ft_strnstr(argv[1] ,argv[2], ft_strlen(argv[1])));
}*/
/* end main ft_strnstr*/

/*main ft_atoi*/
/*int main(int argc, char *argv[])
{
    (void)argc;
    printf("%d\n", ft_atoi(argv[1]));
}*/
/* end main ft_atoi*/

/*ft_split*/
/*int main (int argc, char *argv[])
{
	(void)argc;
	char **result = ft_split(argv[1], argv[2][0]);
	for (int i = 0; i < ft_count_word(argv[1], argv[2][0]); i++)
		printf("%s\n", result[i]);
}*/

/*ft_itoa*/
/*int main(void)
{
    printf("%s\n", ft_itoa(21474999999));
}*/

/*ft_strtrim*/
/*int main(int argc, char *argv[])
{
    printf("%s\n", ft_strtrim((char const *)argv[1], (char const *)argv[2]));
}*/

/*ft_strmapi*/
/*char    test(unsigned int nb, char c)
{
    return (c + 1);
}

int main(int argc, char *argv[])
{
    printf("%s : ", argv[1]);
    printf("%s\n", ft_strmapi(argv[1], test));
}*/

/*ft_putchar_fd/ ft_putnbr_fd*/
/*#include <fcntl.h>
int main(int argc, char *argv[])
{
    int fd = open("test", O_WRONLY);
    ft_putendl_fd(argv[1], fd);
}


#include <fcntl.h>
int main(int argc, char *argv[])
{
    int fd = open("test", O_WRONLY);
    ft_putnbr_fd(ft_atoi(argv[1]), fd);
}*/

/*ft_lst all*/
/*static void *f(void *content)
{
    char *cont = (char *)content;
    cont = "abc";
    return((void *)cont);
}*/

/*static void    ft_lstprint(t_list *lst)
{
    if (!lst)
        return ;
    while (lst)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}

static void ft_lstdel(void *elem)
{
    printf("del");
}*/