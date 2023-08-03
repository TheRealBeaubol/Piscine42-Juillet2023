# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/31 18:32:34 by lboiteux          #+#    #+#              #
#    Updated: 2023/07/31 18:32:36 by lboiteux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		=	./srcs/ft_putchar.c\
				./srcs/ft_putstr.c\
				./srcs/ft_strcmp.c\
				./srcs/ft_strlen.c\
				./srcs/ft_swap.c

HEAD		=  ./includes/ft.h

NAME		= libft.a

OBJS		= ${SRCS:.c=.o}

all : ${NAME}

.c.o :
	gcc -Wall -Werror -Wextra -I ./includes/ -c $< -o ${<:.c=.o}

${NAME} : ${OBJS} 
	ar rc ${NAME} ${OBJS} ${HEAD}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re	: fclean all

.PHONY : re fclean all clean
