NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

INC = .

LIBFT = libft/libft.a

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

$(LIBFT):
	make -C $(dir $(LIBFT))

$(NAME) : $(LIBFT) ${OBJS}
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(FLAGS) -I$(INC) -c -o  $@ $<

bonus : all

clean :
	make -C $(dir $(LIBFT)) fclean
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all re clean fclean bonus
