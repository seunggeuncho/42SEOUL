# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seucho <seucho@42seuol.student.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 13:59:33 by seucho            #+#    #+#              #
#    Updated: 2022/05/06 14:50:00 by seucho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CC			=	gcc
CFLAG		=	-Wall -Wextra -Werror

RM			=	rm -f

AR			=	ar rcs

SRCS		=	ft_printf.c\
				function.c

OBJS		=	$(SRCS:.c=.o)


%.o		:	%.c
			$(CC) $(CFLAG) -c -o $*.o $<
	

$(NAME)		: 	$(OBJS)
			@ $(AR) $(NAME) $(OBJS)
all			:	$(NAME)

clean		:
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
