# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 07:58:20 by sde-ridd          #+#    #+#              #
#    Updated: 2021/09/17 07:58:22 by sde-ridd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
FLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

all: ${NAME}

${OBJS}:	${SRCS}
				gcc ${FLAGS} -I includes -c $< -o $@

${NAME}: 	${OBJS}
				ar rc libft.a ${OBJS}
				ranlib libft.a

clean:
				rm -f ${OBJS}

fclean: 	clean
				rm -f libft.a

re: 		fclean all

.PHONY: all clean fclean re
