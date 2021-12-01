/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:24:15 by seucho            #+#    #+#             */
/*   Updated: 2021/10/18 21:10:26 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = -1;
	b = -1;
	while (dest[++a])
		continue ;
	while (src[++b])
		dest[a + b] = src[b];
	dest[a + b] = '\0';
	return (dest);
}
