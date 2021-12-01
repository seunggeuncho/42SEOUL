/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <student@student.42.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:39:07 by seucho            #+#    #+#             */
/*   Updated: 2021/10/19 01:07:53 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = -1 * i;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		result = 10 * result;
		result = result + *str - '0';
		str++;
	}
	return (result * i);
}
