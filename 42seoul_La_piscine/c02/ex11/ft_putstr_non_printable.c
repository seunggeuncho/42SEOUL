/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:51:26 by seucho            #+#    #+#             */
/*   Updated: 2021/10/17 19:17:47 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
char	g_hex[17] = "0123456789abcdef";

void	putchar(unsigned char str)
{
	write(1, &str, 1);
}	

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			putchar(str[i]);
		}
		else
		{
			putchar('\\');
			putchar(g_hex[str[i] / 16]);
			putchar(g_hex[str[i] % 16]);
		}
	}
}
