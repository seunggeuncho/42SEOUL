#!/bin/sh
gcc -Wall -Wextra -Werror ft_putchar.c -c
gcc -Wall -Wextra -Werror ft_putstr.c -c
gcc -Wall -Wextra -Werror ft_strcmp.c -c
gcc -Wall -Wextra -Werror ft_strlen.c -c
gcc -Wall -Wextra -Werror ft_swap.c -c
ar rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
