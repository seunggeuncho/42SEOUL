/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:15:31 by seucho            #+#    #+#             */
/*   Updated: 2021/10/20 01:00:21 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	str_len(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		continue ;
	}
	return (i);
}

int	str_check(char *str)
{
	int	check;
	int	overlap;

	check = -1;
	if (str_len(str) <= 1)
		return (0);
	while (str[++check])
	{
		if (str[check] == '+' || str[check] == '-')
			return (0);
		overlap = check + 1;
		while (str[overlap++] != '\0')
		{
			if (str[check] == str[overlap])
				return (0);
		}
	}
	return (1);
}

void	ft_checknum(long nbr, char *base)
{
	if (nbr < 0)
	{
		nbr = -1 * nbr;
		write(1, "-", 1);
	}
	if (nbr >= str_len(base))
	{
		ft_checknum(nbr / str_len(base), base);
		ft_checknum(nbr % str_len(base), base);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}	

void	ft_putnbr_base(int nbr, char *base)
{
	long	c_nbr;

	c_nbr = nbr;
	if (str_check(base))
		ft_checknum(c_nbr, base);
}
