/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:05:47 by seucho            #+#    #+#             */
/*   Updated: 2022/01/06 00:51:17 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*re;

	re = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!re)
		return (0);
	i = 0;
	while (s[i])
	{
		re[i] = s[i];
		i++;
	}
	re[i] = 0;
	return (re);
}
