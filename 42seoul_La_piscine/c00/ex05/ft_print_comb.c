/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:11:49 by seucho            #+#    #+#             */
/*   Updated: 2021/10/13 20:33:17 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_comb(void)
{
	char	buff1;
	char	buff2;
	char	buff3;
	char	buff[3];

	buff1 = '0';
	while (buff1 <= '7')
	{
		buff[0] = buff1;
		buff2 = ++buff1;
		while (buff2 <= '8')
		{
			buff[1] = buff2;
			buff3 = ++buff2;
			while (buff3 <= '9')
			{
				buff[2] = buff3++;
				write(1, buff, 3);
				if (buff[0] == '7' && buff[1] == '8' && buff[2] == '9')
					break ;
				write(1, ", ", 2);
			}
		}
	}
}
