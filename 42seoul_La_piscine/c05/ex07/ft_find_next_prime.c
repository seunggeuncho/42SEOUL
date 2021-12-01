/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student42.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:17:15 by seucho            #+#    #+#             */
/*   Updated: 2021/10/21 11:01:45 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	check;

	check = 2;
	if (nb < 2)
		return (0);
	else
	{
		while (check <= nb / check)
		{
			if (nb % check++ == 0)
				return (0);
		}	
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_prime(nb) == 0)
		nb++;
	return (nb);
}
