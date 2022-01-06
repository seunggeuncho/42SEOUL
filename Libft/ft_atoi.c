/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 03:31:49 by seucho            #+#    #+#             */
/*   Updated: 2022/01/05 23:13:26 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	check_overflow(unsigned long long sum, int sign)
{
	if (sum > LLONG_MAX && sign == -1)
		return (0);
	if (sum > LLONG_MAX && sign == 1)
		return (-1);
	return (sum * sign);
}

int	ft_atoi(const char *str)
{
	size_t					i;
	int						sign;
	unsigned long long		num;

	num = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (check_overflow(num, sign));
}
