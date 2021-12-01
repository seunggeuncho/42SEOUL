/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:15:11 by seucho            #+#    #+#             */
/*   Updated: 2021/10/20 01:00:35 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	base_check(char *str)
{
	int	check;
	int	overlap;
	int	i;

	check = 0;
	i = -1;
	if (str_len(str) <= 1)
		return (0);
	while (*str)
	{
		if (*str == '+' || *str == '-' || *str == ' ')
			return (0);
		str++;
	}
	while (str[++i])
	{
		overlap = i + 1;
		while (str[overlap])
		{
			if (str[i] == str[overlap])
				return (0);
			overlap++;
		}
	}
	return (1);
}

int	number_str(char find, char *dest)
{
	int	idx;

	idx = 0;
	while (dest[idx])
	{
		if (dest[idx] == find)
			return (idx);
		idx++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	min;
	int	result;

	min = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min = min * -1;
		str++;
	}
	if (base_check(base) == 1)
	{
		while (*str && number_str(*str, base) != -1)
		{
			result = result * str_len(base);
			result = number_str(*str, base) + result;
			str++;
		}
	}
	else
		return (0);
	return (result * min);
}
