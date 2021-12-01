/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@42seuol.student.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:26:15 by seucho            #+#    #+#             */
/*   Updated: 2021/10/21 13:00:04 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	str_comp(char *str, char *cmp)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0' && cmp[cnt] != '\0')
	{
		if (str[cnt] != cmp[cnt])
			return (str[cnt] - cmp[cnt]);
		cnt++;
	}
	return (0);
}

void	str_swap(int cmp, int cmp2, char **str)
{
	char	*swp;

	swp = *(str + cmp);
	*(str + cmp) = *(str + cmp2);
	*(str + cmp2) = swp;
}

void	put_char(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	str_print(char **str)
{
	int	cnt;

	cnt = 1;
	while (*(str + cnt))
	{
		put_char(*(str + cnt));
		put_char("\n");
		cnt++;
	}
}

int	main(int argc, char **argv)
{
	int	cnt;
	int	cmp;

	cnt = 1;
	if (argc > 2)
	{
		while (cnt < argc)
		{
			cmp = 1;
			while (cmp < argc - cnt)
			{
				if (str_comp(*(argv + cmp), *(argv + cmp + 1)) > 0)
					str_swap(cmp, cmp + 1, argv);
				cmp++;
			}
			cnt++;
		}
	}
	str_print(argv);
	return (0);
}
