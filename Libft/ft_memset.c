/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 01:35:11 by seucho            #+#    #+#             */
/*   Updated: 2022/01/06 00:42:22 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*first_dest;
	unsigned char	src;
	size_t			i;

	first_dest = dest;
	src = c;
	i = 0;
	while (i++ < n)
		*first_dest++ = src;
	return (dest);
}
