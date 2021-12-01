/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@42seuol.student.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:54:32 by seucho            #+#    #+#             */
/*   Updated: 2021/10/20 10:04:25 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cnt;

	argc = 0;
	cnt = -1;
	while (argv[0][++cnt])
	{
		write(1, &argv[0][cnt], 1);
	}
	return (0);
}
