# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 18:46:12 by rgerdzhi          #+#    #+#              #
#    Updated: 2024/06/14 17:05:22 by rgerdzhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = ft_display_file
SRCS = ft_display_file.c
OBJ = ft_display_file.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

.PHONY: all clean fclean
