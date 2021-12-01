void	set1(char *arr, int cnt)
{
	if (arr[cnt] == 1)
	{
		g_space[0][cnt] = 4;
		g_visited[0][cnt] = 1;
	}
	else if (arr[cnt] == 2)
	{
		g_space[1][cnt] = 4;
		g_visited[1][cnt] = 1;
	}
}
