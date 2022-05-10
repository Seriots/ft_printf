NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCS = 	ft_printf.c \
		ft_printf_utils.c \
		ft_printf_utils2.c \
		ft_printf_components.c \
		conversions_files/ft_putstr.c \
		conversions_files/ft_putnbr.c \
		conversions_files/ft_putchar.c \
		conversions_files/ft_puthexa_min.c \
		conversions_files/ft_putpointeur.c \
		conversions_files/ft_putpointeur2.c \
		conversions_files/ft_puthexa_maj.c \
		conversions_files/ft_putnbr_unsigned.c

OBJS = ${SRCS:.c=.o}

all : $(NAME)

ft_lib:
	make -C libft

$(NAME) : ft_lib ${OBJS}
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)

%o:%.c
	$(CC) $(FLAGS) -c -o  $@ $<

bonus : all

clean :
	make clean -C libft
	rm -rf ${OBJS} $(OBJS_LIBFT)

fclean : clean
	make fclean -C libft
	rm -rf ${NAME}

re : fclean all

.PHONY : all re clean fclean bonus
