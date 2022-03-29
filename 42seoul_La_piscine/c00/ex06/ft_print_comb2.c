/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@42seuol.student.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:10:18 by seucho            #+#    #+#             */
/*   Updated: 2021/10/13 20:17:38 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_2_num(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_change_character(int a, int b)
{
	char	a_front;
	char	a_back;
	char	b_front;
	char	b_back;

	a_front = a / 10 + '0';
	a_back = a % 10 + '0';
	b_front = b / 10 + '0';
	b_back = b % 10 + '0';
	ft_2_num(a_front, a_back);
	write(1, " ", 1);
	ft_2_num(b_front, b_back);
	if (!(a_front == '9' && a_back == '8' && b_front == '9' && b_back == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_change_character(a, b);
			b++;
		}
		a++;
	}
}
