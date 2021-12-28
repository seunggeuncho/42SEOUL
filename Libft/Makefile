# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 18:02:44 by seucho            #+#    #+#              #
#    Updated: 2021/12/28 18:21:28 by seucho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= gcc
CFLAG		= -Wall -Wextra -Werror

RM			= rm -f

AR			= ar
ARFLAGS		= crs

INCLUDES	= ./libft.h

FILE_1	=	ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_memset.c		\
			ft_bzero.c 		\
			ft_memcpy.c 	\
			ft_memmove.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\

FILE_2	=	ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_strmapi.c	\
			ft_itoa.c		\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\

BONUS	=	ft_lstnew.c			\
			ft_lstsize.c		\
			ft_lstadd_front.c	\
			ft_lstadd_back.c	\
			ft_lstclear.c		\
			ft_lstlast.c		\
			ft_lstiter.c		\
			ft_lstmap.c			\
			ft_lstdelone.c		\

SRCS	=	$(FILE_1)
			$(FILE_2)

OBJS	=	$(SRCS:.c=.o)

OBJS_BONUS	=	$(BONUS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY : all clean fclean re

