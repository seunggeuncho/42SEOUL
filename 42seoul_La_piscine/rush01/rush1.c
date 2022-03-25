/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:39:05 by seucho            #+#    #+#             */
/*   Updated: 2022/01/29 16:36:17 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		g_row[2][4] = {0, };
int		g_col[2][4] = {0, };
int		g_space[4][4] = {0, };
int		g_visited[4][4] = {0, };
int		check_space(void);
int		check_same(void);
void	set_space(void);

void	prt_space(void)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = g_space[i][j] + 48;
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	dfs(int index)
{
	int	i;

	i = 0;
	if (index == 16)
	{	
		if (check_space() == 1 && check_same() == 1)
		{	
			prt_space();
		}
		return ;
	}
	if (g_visited[index / 4][index % 4] == 0)
	{
		while (i < 4)
		{
			g_visited[index / 4][index % 4] = 1;
			g_space[index / 4][index % 4] = i + 1;
			dfs(index + 1);
			g_visited[index / 4][index % 4] = 0;
			i++;
		}
	}
	else
		dfs(index + 1);
}

void	insert_num(int i, char num_word)
{
	if (i < 4)
		g_row[0][i] = num_word - '0';
	else if (i < 8)
		g_row[1][i % 4] = num_word - '0';
	else if (i < 12)
		g_col[0][i % 4] = num_word - '0';
	else if (i < 16)
		g_col[1][i % 4] = num_word - '0';
}

int	take_row_col(char *argv)
{
	int	count;
	int	i;
	int	check;

	i = 0;
	check = 0;
	count = 0;
	while (argv[count] != '\0')
	{
		if (argv[count] >= 49 && argv[count] <= 52 && check == 0)
		{
			insert_num(i, argv[count]);
			i++;
			check = 1;
		}
		else if (argv[count] == ' ' && check == 1)
			check = 0;
		else
			return (-1);
		count++;
	}
	if (count != 31)
		return (-1);
	return (1);
}

int	main(int argc, char **argv)
{
	int	a;
	int	k;

	k = argc;
	a = take_row_col(argv[1]);
	if (a == -1)
	{
		write(1, "exclude", 7);
		return (0);
	}
	set_space();
	dfs(0);
	return (0);
}
