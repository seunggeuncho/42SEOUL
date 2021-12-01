/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 00:22:56 by seucho            #+#    #+#             */
/*   Updated: 2021/10/20 00:36:03 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	array_size(char *str)
{
	int	size;

	size = -1;
	while (str[++size])
		continue ;
	return (size);
}

int	check(int n, char *str, char *find)
{
	int	cnt;

	cnt = -1;
	while (find[++cnt])
	{
		if (str[cnt + n] == find[cnt])
			continue ;
		else
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	str_size;
	int	find_size;
	int	i;

	i = -1;
	if (to_find[0] == '\0')
		return (NULL);
	str_size = array_size(str);
	find_size = array_size(to_find);
	while (++i < str_size)
	{
		if (str[i] == to_find[0])
		{
			if (check(i, str, to_find) == 1)
			{
				return (&str[i]);
			}
			else
				continue ;
		}
		else
			continue ;
	}
	return (NULL);
}
