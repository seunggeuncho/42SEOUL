/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:28:04 by seucho            #+#    #+#             */
/*   Updated: 2021/10/14 13:23:19 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			continue ;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			continue ;
		else if (str[i] == ' ')
			continue ;
		else
			return (0);
	}
	return (1);
}
