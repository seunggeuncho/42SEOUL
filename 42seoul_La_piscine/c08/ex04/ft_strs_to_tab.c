/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 00:02:31 by seucho            #+#    #+#             */
/*   Updated: 2021/10/26 00:08:41 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_get_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_copy_str(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_get_str_len(src) * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;

	i = 0;
	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_get_str_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_copy_str(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
