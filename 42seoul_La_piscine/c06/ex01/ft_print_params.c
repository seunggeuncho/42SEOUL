/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@42seuol.student.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:05:09 by seucho            #+#    #+#             */
/*   Updated: 2021/10/20 10:25:24 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	num;
	int	cnt;

	num = 1;
	while (num < argc)
	{
		cnt = 0;
		while (argv[num][cnt])
		{
			write(1, &argv[num][cnt], 1);
			cnt++;
		}
		write(1, "\n", 1);
		num++;
	}
	return (0);
}
