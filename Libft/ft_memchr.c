/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 02:47:34 by seucho            #+#    #+#             */
/*   Updated: 2021/12/27 03:14:58 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(void *ptr, int value, size_t n)
{
	unsigned char	*tmp_ptr;
	unsigned char	search;
	unsigned char	i;

	tmp_ptr = (unsigned char *)ptr;
	search = (unsigned char)value;
	i = 0;
	while (i < n)
	{
		if (tmp_ptr[i] == search)
			return (tmp_ptr + i);
		i++;
	}
	return (0);
}
