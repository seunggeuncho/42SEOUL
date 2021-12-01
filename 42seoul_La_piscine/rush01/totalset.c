#include<unistd.h>

extern int	g_row[2][4];
extern int	g_col[2][4];
extern int	g_visited[4][4];
extern int	g_space[4][4];

void	set1(char *arr)
{
	int	cnt;

	cnt = -1;
	while (arr[++cnt])
	{
		if (arr[cnt] == 1)
		{
			g_space[0][cnt] = 4;
			g_visited[0][cnt] = 1;
		}
		else if (arr[cnt] == 4)
		{
			g_space[0][cnt] = 1;
			g_visited[0][cnt] = 1;
		}
	}
}

void	set2(char *arr)
{
	int	cnt;

	cnt = -1;
	while (arr[++cnt])
	{
		if (arr[cnt] == 1)
		{
			g_space[3][cnt] = 4;
			g_visited[3][cnt] = 1;
		}
		else if (arr[cnt] == 4)
		{
			g_space[3][cnt] = 1;
			g_visited[3][cnt] = 1;
		}
	}
}

void	set3(char *arr)
{
	int	cnt;

	cnt = -1;
	while (arr[++cnt])
	{
		if (arr[cnt] == 1)
		{
			g_space[cnt][0] = 4;
			g_visited[cnt][0] = 1;
		}
		else if (arr[cnt] == 4)
		{
			g_space[cnt][0] = 1;
			g_visited[cnt][0] = 1;
		}
	}
}

void	set4(char *arr)
{
	int	cnt;

	cnt = -1;
	while (arr[++cnt])
	{
		if (arr[cnt] == 1)
		{
			g_space[cnt][3] = 4;
			g_visited[cnt][3] = 1;
		}
		else if (arr[cnt] == 4)
		{
			g_space[cnt][3] = 1;
			g_visited[cnt][3] = 1;
		}
	}
}

void	set_space(void)
{
	set1(g_row[0]);
	set2(g_row[1]);
	set3(g_col[0]);
	set4(g_col[1]);
}
