/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 02:26:52 by seucho            #+#    #+#             */
/*   Updated: 2022/01/06 00:56:39 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;
	size_t			i;

	i = 0;
	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	while (i < n && one[i] != '\0')
	{
		if (one[i] != two[i])
			return (one[i] - two[i]);
		i++;
	}
	if (one[i] == '\0' && i < n)
		return (one[i] - two[i]);
	return (0);
}
