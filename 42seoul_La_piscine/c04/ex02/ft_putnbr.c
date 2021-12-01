/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:24:53 by seucho            #+#    #+#             */
/*   Updated: 2021/10/19 00:36:42 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	change(int nb)
{
	char	num;

	if (nb > 9)
	{
		num = nb % 10 + 48;
		nb = nb / 10;
		change(nb);
		write(1, &num, 1);
	}
	else
	{
		num = nb + 48;
		write(1, &num, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb >= -2147483647 && nb <= 2147483647)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
			change(nb);
		}
		else if (nb > 0)
			change(nb);
		else
		{
			write(1, "0", 1);
		}
	}
}
