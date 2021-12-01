void	set2(char *arr, int cnt)
{
	if (arr[cnt] == 1)
	{
		g_space[3][cnt] = 4;
		g_visited[3][cnt] = 1;
	}
	else if (arr[cnt] == 2)
	{
		g_space[2][cnt] = 4;
		g_visited[2][cnt] = 1;
	}
}
