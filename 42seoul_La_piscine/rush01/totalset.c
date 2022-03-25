/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   totalset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:39:32 by seucho            #+#    #+#             */
/*   Updated: 2021/10/17 17:40:18 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	g_row[2][4];
extern int	g_col[2][4];
extern int	g_visited[4][4];
extern int	g_space[4][4];

void	set1(void)
{
	int	cnt;

	cnt = 0;
	while (cnt < 4)
	{
		if (g_row[0][cnt] == 1)
		{
			g_space[0][cnt] = 4;
			g_visited[0][cnt] = 1;
		}
		else if (g_row[0][cnt] == 4)
		{
			g_space[0][cnt] = 1;
			g_visited[0][cnt] = 1;
		}
		cnt++;
	}
}

void	set2(void)
{
	int	cnt;

	cnt = 0;
	while (cnt < 4)
	{
		if (g_row[1][cnt] == 1)
		{
			g_space[3][cnt] = 4;
			g_visited[3][cnt] = 1;
		}
		else if (g_row[1][cnt] == 4)
		{
			g_space[3][cnt] = 1;
			g_visited[3][cnt] = 1;
		}
		cnt++;
	}
}

void	set3(void)
{
	int	cnt;

	cnt = 0;
	while (cnt < 4)
	{
		if (g_col[0][cnt] == 1)
		{
			g_space[cnt][0] = 4;
			g_visited[cnt][0] = 1;
		}
		else if (g_col[0][cnt] == 4)
		{
			g_space[cnt][0] = 1;
			g_visited[cnt][0] = 1;
		}
		cnt++;
	}
}

void	set4(void)
{
	int	cnt;

	cnt = 0;
	while (cnt < 4)
	{
		if (g_col[1][cnt] == 1)
		{
			g_space[cnt][3] = 4;
			g_visited[cnt][3] = 1;
		}
		else if (g_col[1][cnt] == 4)
		{
			g_space[cnt][3] = 1;
			g_visited[cnt][3] = 1;
		}
		cnt++;
	}
}

void	set_space(void)
{
	set1();
	set2();
	set3();
	set4();
}
