/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:36:58 by seucho            #+#    #+#             */
/*   Updated: 2021/10/17 17:38:28 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	g_space[4][4];
extern int	g_row[4][4];
extern int	g_col[4][4];

int	up_checking(void)
{
	int	i;
	int	j;
	int	temp;
	int	count;

	j = 0;
	while (j < 4)
	{
		i = 0;
		temp = 0;
		count = 0;
		while (i < 4)
		{
			if (temp < g_space[i][j])
			{
				count++;
				temp = g_space[i][j];
			}
			i++;
		}
		if (count != g_row[0][j])
			return (-1);
		j++;
	}
	return (0);
}

int	down_checking(void)
{
	int	i;
	int	j;
	int	temp;
	int	count;

	j = 0;
	while (j < 4)
	{
		i = 3;
		temp = 0;
		count = 0;
		while (i >= 0)
		{
			if (temp < g_space[i][j])
			{
				count++;
				temp = g_space[i][j];
			}
			i--;
		}
		if (count != g_row[1][j])
			return (-1);
		j++;
	}
	return (0);
}

int	left_checking(void)
{
	int	i;
	int	j;
	int	temp;
	int	count;

	j = 0;
	while (j < 4)
	{
		i = 0;
		temp = 0;
		count = 0;
		while (i < 4)
		{
			if (temp < g_space[j][i])
			{
				count++;
				temp = g_space[j][i];
			}
			i++;
		}
		if (count != g_col[0][j])
			return (-1);
		j++;
	}
	return (0);
}

int	right_checking(void)
{
	int	i;
	int	j;
	int	temp;
	int	count;

	j = 0;
	while (j < 4)
	{
		i = 3;
		temp = 0;
		count = 0;
		while (i >= 0)
		{
			if (temp < g_space[j][i])
			{
				count++;
				temp = g_space[j][i];
			}
			i--;
		}
		if (count != g_col[1][j])
			return (-1);
		j++;
	}
	return (0);
}

int	check_space(void)
{
	if (up_checking() == -1)
		return (-1);
	else if (down_checking() == -1)
		return (-1);
	else if (left_checking() == -1)
		return (-1);
	else if (right_checking() == -1)
		return (-1);
	return (1);
}
