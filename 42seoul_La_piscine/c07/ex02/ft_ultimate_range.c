/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:54:21 by seucho            #+#    #+#             */
/*   Updated: 2021/10/24 14:36:13 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	idx;

	idx = 0;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(**range) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min + idx < max)
	{
		(*range)[idx] = min + idx;
		idx++;
	}
	return (idx);
}
