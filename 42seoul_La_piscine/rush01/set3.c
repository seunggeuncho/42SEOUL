void	set3(char *arr, int n)
{
	if (arr[cnt] == 1)
	{
		g_space[cnt][0] = 4;
		g_visited[cnt][0] = 1;
	}
	else if (arr[cnt] == 2)
	{
		g_space[cnt][1] = 4;
		g_visited[cnt][1] = 1;
	}
}
