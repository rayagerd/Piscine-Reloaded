# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 18:46:12 by rgerdzhi          #+#    #+#              #
#    Updated: 2024/06/13 16:55:56 by rgerdzhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o
INCLUDES = ./includes 

all: $(NAME)

$(NAME): $(OBJ)
	ar -q $(NAME) $(OBJ)

%.o: %.c
	$(CC) -I$(INCLUDES) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re:
	make fclean all

.PHONY: all clean fclean re 
