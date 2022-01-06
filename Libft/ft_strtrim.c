/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:10:54 by seucho            #+#    #+#             */
/*   Updated: 2022/01/06 01:12:21 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;

	if (s1 == NULL)
		return (0);
	if (set == NULL)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_check(s1[start], set))
		start++;
	while (s1[end] && ft_check(s1[end], set) && end > start)
		end--;
	new = (char *)malloc(sizeof(char) * (end - start + 2));
	if (new == NULL)
		return (0);
	ft_strlcpy(new, s1 + start, end - start + 2);
	return (new);
}
