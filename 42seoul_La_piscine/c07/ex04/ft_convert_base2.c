/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 01:10:58 by seucho            #+#    #+#             */
/*   Updated: 2021/10/25 02:04:20 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	change_mod(long nbr, int *cnt, int *len)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		*cnt = 1;
		*len = *len + 1;
	}
	return (nbr);
}

int	space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_nb(int nb, char *str)
{
	int	cnt;
	int	len;

	cnt = -1;
	len = 0;
	while (str[++cnt])
		continue ;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / cnt;
		len++;
	}
	return (len);
}
