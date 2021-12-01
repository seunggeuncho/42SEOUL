/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:28:46 by seucho            #+#    #+#             */
/*   Updated: 2021/10/26 23:53:52 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*strcp(char *str, unsigned int n)
{
	unsigned int		cnt;
	char				*p;

	cnt = 0;
	p = (char *)malloc(sizeof(char) * (n + 1));
	if (p == NULL)
		return (NULL);
	while (cnt < n)
	{
		p[cnt] = str[cnt];
		cnt++;
	}
	return (p);
}

char	**emptystr(char *str)
{
	char	**p;
	int		i;

	i = 0;
	while (str[i++])
		continue ;
	p = (char **)malloc(sizeof(char *) * 2);
	if (p == NULL)
		return (NULL);
	p[0] = strcp(str, i);
	p[1] = NULL;
	return (p);
}

int	ft_check(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	arr_fill(char *str, char *charset, char **sp)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	j = 1;
	cnt = 0;
	if (str[i] && (ft_check(charset, str[i]) == 0))
		j = i++;
	while (str[i])
	{
		if (ft_check(charset, str[i]))
		{
			if (j < i)
				sp[cnt++] = strcp((str + j), i - j);
			j = i + 1;
		}
		i++;
	}
	if (j < i)
		sp[cnt] = strcp((str + j), i - j);
	sp[++cnt] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**sp;
	int		cnt;

	if (charset[0] == '\0')
		return (emptystr(str));
	cnt = 0;
	while (str[cnt++])
		continue ;
	sp = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (sp == NULL)
		return (NULL);
	arr_fill(str, charset, sp);
	return (sp);
}
