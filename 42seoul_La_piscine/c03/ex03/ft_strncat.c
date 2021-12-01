/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:46:01 by seucho            #+#    #+#             */
/*   Updated: 2021/10/18 21:16:54 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	int				dest_size;

	a = -1;
	dest_size = -1;
	while (dest[++dest_size])
		continue ;
	while (++a < nb && src[a] != '\0')
		dest[dest_size + a] = src[a];
	dest[a + dest_size] = '\0';
	return (dest);
}
