/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:12:52 by seucho            #+#    #+#             */
/*   Updated: 2021/10/13 17:02:39 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
