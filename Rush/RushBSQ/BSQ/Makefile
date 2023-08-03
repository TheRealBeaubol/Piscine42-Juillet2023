# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 07:10:32 by lboiteux          #+#    #+#              #
#    Updated: 2023/08/01 07:10:37 by lboiteux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

NAME = bsq

LIBP = ./srcs

SRCS = ./srcs/ft_error.c \
	./srcs/ft_split_file.c \
	./srcs/main.c \
	./srcs/ft_find_square.c

OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME): lib $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBP) -lutils


lib:
	make re -C $(LIBP)

%.o : %.c $(LIBP)/utils/utils.h
	$(CC) $(CFLAGS) $< -c -o $@

fclean: clean
	make fclean -C $(LIBP)
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all

.PHONY: all fclean clean re
