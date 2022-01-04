/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 22:24:47 by seucho            #+#    #+#             */
/*   Updated: 2022/01/03 21:32:17 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ndest;
	unsigned char	*nsrc;	

	if (!dest && !src)
		return (0);
	ndest = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	while (n--)
		*ndest++ = *nsrc++;
	return (dest);
}
