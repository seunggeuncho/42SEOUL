/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:15:36 by seucho            #+#    #+#             */
/*   Updated: 2021/10/21 15:10:21 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned int	idx;
	char			*dest;

	idx = 0;
	while (src[idx])
		idx++;
	dest = (char *)malloc(idx + 1);
	if (dest == NULL)
		return (NULL);
	idx = -1;
	while (src[++idx])
		dest[idx] = src[idx];
	dest[idx] = '\0';
	return (dest);
}
