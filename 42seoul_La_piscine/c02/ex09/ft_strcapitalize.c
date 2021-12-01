/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:31:06 by seucho            #+#    #+#             */
/*   Updated: 2021/10/16 21:14:46 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	upper(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
	}
}

void	lower(char *str)
{
	int i;

	i = -1;
	while(str[++i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	lower(str);
	while (str[++i])
	{
		if (i == 0)
			upper(&str[i]);
		else if (str[i] == ' ')
			upper(&str[i + 1]);
		else if (!(str[i] >= 65 && str[i] <= 90))
		{
			if (!(str[i] >= 97 && str[i] <= 122))
			{
				if (!(str[i] >= 48 && str[i] <= 57))
					upper(&str[i + 1]);
			}
		}
		else
			continue ;
	}
	return (str);
}
