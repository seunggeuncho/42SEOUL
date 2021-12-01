void	set4(char *arr, int cnt)
{
	if (arr[cnt] == 1)
	{
		g_space[cnt][3] = 4;
		g_visited[cnt][3] = 1;
	}
	else if (arr[cnt] == 2)
	{
		g_space[cnt][2] = 4;
		g_visited[cnt][2] = 1;
	}
}
