/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 03:13:20 by seucho            #+#    #+#             */
/*   Updated: 2022/01/05 23:50:05 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*tmp_ptr1;
	unsigned char	*tmp_ptr2;
	size_t			i;

	tmp_ptr1 = (unsigned char *)ptr1;
	tmp_ptr2 = (unsigned char *)ptr2;
	i = 0;
	while (i < n)
	{
		if (tmp_ptr1[i] != tmp_ptr2[i])
			return (tmp_ptr1[i] - tmp_ptr2[i]);
		i++;
	}
	return (0);
}
