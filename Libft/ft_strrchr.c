/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 02:09:02 by seucho            #+#    #+#             */
/*   Updated: 2022/01/06 01:12:04 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	search;

	search = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == search)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == search)
		return ((char *)s);
	return (0);
}
