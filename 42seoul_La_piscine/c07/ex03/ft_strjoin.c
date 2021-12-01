/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:36:57 by seucho            #+#    #+#             */
/*   Updated: 2021/10/24 22:59:17 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*empty_str(void)
{
	char	*str;

	str = (char *)malloc(1);
	str[0] = '\0';
	return (str);
}

int	arr_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	str_cat(char *dest, char *src)
{
	int	len;
	int	idx;

	len = arr_len(dest);
	idx = 0;
	while (src[idx])
	{
		dest[len + idx] = src[idx];
		idx++;
	}
	dest[len + idx] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		mod_size;
	int		idx;
	char	*mod;

	if (size == 0)
		return (empty_str());
	mod_size = arr_len(sep) * (size - 1);
	idx = 0;
	while (idx < size)
		mod_size = mod_size + arr_len(strs[idx++]);
	mod = malloc(mod_size + 1);
	if (mod == NULL)
		return (NULL);
	mod[0] = '\0';
	idx = 0;
	while (idx < size - 1)
	{
		str_cat(mod, strs[idx]);
		str_cat(mod, sep);
		idx++;
	}
	str_cat(mod, strs[idx]);
	return (mod);
}
