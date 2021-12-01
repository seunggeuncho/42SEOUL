# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seucho <seucho@student.42.kr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 20:06:16 by seucho            #+#    #+#              #
#    Updated: 2021/10/26 20:42:01 by seucho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra
CC = gcc
TARGET = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRC:.c=.o)
INCDIR = includes

all : $(TARGET)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)
$(TARGET):$(OBJS)
	ar crs $@ $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(TARGET)
re : fclean all
