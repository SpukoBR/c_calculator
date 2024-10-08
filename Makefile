# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: peda-cos <peda-cos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/21 02:40:59 by peda-cos          #+#    #+#              #
#    Updated: 2024/09/21 03:07:57 by peda-cos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = calc
SRC = main.c calculate.c ft_atoi.c ft_isspace.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
