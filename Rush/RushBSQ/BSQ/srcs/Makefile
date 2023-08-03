# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboiteux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 15:07:15 by lboiteux          #+#    #+#              #
#    Updated: 2023/08/02 15:07:16 by lboiteux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libutils.a

SRCS = ./utils/ft_realloc.c \
	   ./utils/ft_split.c \
	   ./utils/utils_square.c \
	   ./utils/ft_strlen.c \
	   ./utils/len_tab.c

OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all

.PHONY: all fclean clean re
