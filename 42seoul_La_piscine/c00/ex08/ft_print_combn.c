/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@42seuol.student.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:38:48 by seucho            #+#    #+#             */
/*   Updated: 2021/10/13 21:55:13 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	g_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int		g_visit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void	Print(int n)
{
	char	i;
	int		idx;
	int		j;

	j = 1;
	idx = 0;
	while (idx <= 9)
	{
		if (g_visit[idx] == 1)
		{
			i = g_arr[idx] + 48;
			write(1, &i, 1);
			idx++;
		}
		else
			idx++;
	}
	while (g_visit[10 - j] == 1)
		j++;
	if (n == j - 1)
		return ;
	write(1, ", ", 2);
}	

void	DFS(int cnt, int idx, int n)
{
	if (cnt == n)
	{
		Print(n);
		return ;
	}
	while (idx <= 9)
	{
		if (g_visit[idx] == 1)
		{
			idx++;
			continue ;
		}
		g_visit[idx] = 1;
		DFS (cnt + 1, idx + 1, n);
		g_visit[idx] = 0;
		idx++;
	}
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
	{
		DFS(0, 0, n);
	}
	else
		return ;
}
