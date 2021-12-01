/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:00:56 by seucho            #+#    #+#             */
/*   Updated: 2021/10/24 16:03:08 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	cnt;
	int	idx;

	if (min >= max)
		return (NULL);
	cnt = max - min;
	range = malloc((cnt) * (sizeof(int)));
	idx = 0;
	while (min < max)
	{
		range[idx] = min;
		idx++;
		min++;
	}
	return (range);
}
