# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 18:02:44 by seucho            #+#    #+#              #
#    Updated: 2022/01/06 01:26:04 by seucho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC		=	ft_isalpha.c	\
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
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_strmapi.c	\
			ft_itoa.c		\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_striteri.c	

OBJ		=	$(SRC:.c=.o)

BSRC	=	ft_lstnew.c			\
			ft_lstsize.c		\
			ft_lstadd_front.c	\
			ft_lstadd_back.c	\
			ft_lstclear.c		\
			ft_lstlast.c		\
			ft_lstiter.c		\
			ft_lstmap.c			\
			ft_lstdelone.c		

BOBJ	=	$(BSRC:.c=.o)
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

ifdef WITH_BONUS
	OBJECTS = $(OBJ) $(BOBJ)
else
	OBJECTS = $(OBJ)
endif

.PHONY:	all bonus clean fclean re

all :		$(NAME)

$(NAME):	$(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

bonus:
	@make WITH_BONUS=1 all

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ) $(BOBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all
