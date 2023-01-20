# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 17:11:15 by tvo               #+#    #+#              #
#    Updated: 2023/01/10 14:16:32 by tvo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	libft/ft_putchar_fd.c \
					libft/ft_itoa.c \
					ft_conversion_hexa.c \
					ft_conversion_nbr.c \
					ft_conversion_percent.c \
					ft_conversion_ptr.c \
					ft_conversion_str.c \
					ft_conversion_unsigned.c \
					ft_printf.c


OBJS			= $(SRCS:.c=.o)

DEPS			+= ${SRCS:.c=.d}

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) ${DEPS}

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

%.o : 			%.c
				${CC} ${CFLAGS} -c $< -o $@

%.d :			%.c
				${CC} ${CFLAGS} -MM -c $< -o $@

.PHONY:			all clean fclean re bonus

-include ${DEPS}
