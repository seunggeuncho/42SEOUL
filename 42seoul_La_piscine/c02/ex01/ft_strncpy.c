/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:30:29 by seucho            #+#    #+#             */
/*   Updated: 2021/10/17 19:13:50 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (dest[++j])
	{
		continue ;
	}
	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < j)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
