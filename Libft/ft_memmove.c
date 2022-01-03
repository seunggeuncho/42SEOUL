/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:57:57 by seucho            #+#    #+#             */
/*   Updated: 2021/12/30 17:19:21 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	unsigned int	i;

	if (!dest && !src)
		return (dest);
	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	i = 0;
	if (dest < src)
	{
		while (i++ < n)
			*new_dest++ = *new_src++;
	}
	else
	{
		while (i < n)
		{
			new_dest[n - 1 - i] = new_src[n - 1 - i];
			i++;
		}
	}
	return (dest);
}
