#include<unistd.h>
#include<stdio.h>

int	g_row[2][4];
int	g_col[2][4];
int g_space[4][4] = {{0,},{0,},{0,},{0,}};
int	visited[4][4] = {{1,1,1,1},{1,1,1,1},{1,1,-1,1},{1,1,-1,-1}};

int	checking()///////맨위에거 
{
	int	i;
	int	j;
	int temp;
	int count;

	i = 0;
	j = 0;
	while (j < 4)
	{
		temp = 0; ////// 첫번째 숫자 넣어주기
		count = 0;
		while (i < 4)
		{
			if (temp < g_space[i][0])
			{
				count++;
				temp = g_space[i][0];
			}
			i++;
		}
		if (count != g_row[0][j])
		{
			return (-1);
		}
	}
	return (0);
}

void	prt_space()
{
	int	i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while(j < 4)
		{
			printf("%d ",g_space[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	dfs(int index)
{
	int x;
	int y;
	int i;

	i = 0;
	x = index / 4;
	y = index % 4;
	if(index == 16)
	{	//////마지막 칸이면 출력해줘야지!
		prt_space();
		printf("\n");
		return;
	}
	if (visited[y][x] == -1)
	{
		while(i < 4)
		{
			visited[y][x] = 1;
			g_space[y][x]= i+1;
			dfs(index + 1);
			visited[y][x] = -1;
			i++;
		}
	}
	else
	{
		dfs(index + 1);
	}
}

void take_row_col(char *argv)
{
	int count;
	int i;

	i = 0;
	count = 0;
	printf("%s\n", argv);
	
	while (argv[count] != '\0')
	{
		if(argv[count] >= 48 && argv[count] <= 57)
		{
			if(i < 4)
				g_row[0][i] = argv[count] - '0';
			else if (i < 8)
				g_row[1][i % 4] = argv[count] - '0';
			else if (i < 12)
				g_col[0][i % 4] = argv[count] - '0';
			else if (i < 16)
				g_col[1][i % 4] = argv[count] - '0';
			i++;
		}
		count++;
	}
	
}

int	main(int argc, char **argv)
{
	//printf("%d", argc);
	
	//printf("%s", argv[1]);
	//take_row_col(argv[1]);
	//printf("%d %d %d %d\n",g_row[0][0],g_row[0][1],g_row[0][2],g_row[0][3]);
	//printf("%d", g_space[3][3]);
	//dfs(0);
	set_space();
	dfs(0);
	return 0;
}
