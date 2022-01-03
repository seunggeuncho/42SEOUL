/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:10:54 by seucho            #+#    #+#             */
/*   Updated: 2022/01/01 04:21:21 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(const char *s1, const char *set)
{
	size_t	len;
	size_t	idx;

	len = ft_strlen(s1);
	idx = 0;
	while (idx < len)
	{
		if (ft_strchr(set, s1[idx]) == 0)
			break ;
		idx++;
	}
	return (idx);
}

static size_t	ft_end(const char *s1, const char *set)
{
	size_t	len;
	size_t	idx;

	len = ft_strlen(s1);
	idx = 0;
	while (idx < len)
	{
		if (ft_strchr(set, s1[len - idx - 1]) == 0)
			break ;
		idx++;
	}
	return (len - idx);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;

	if (s1 == (void *)0)
		return (0);
	if (set == (void *)0)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(char) * (end - start + 1) + 1);
	if (new == NULL)
		return (0);
	ft_strlcpy(new, s1 + start, end - start + 1);
	return (new);
}
