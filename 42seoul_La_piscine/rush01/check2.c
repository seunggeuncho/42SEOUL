/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:38:34 by seucho            #+#    #+#             */
/*   Updated: 2021/10/17 17:39:00 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	g_space[4][4];

int	row_one_four(int number)
{
	int	i;
	int	plus_total;
	int	mul_total;

	plus_total = 0;
	mul_total = 1;
	i = 0;
	while (i < 4)
	{
		plus_total += g_space[number][i];
		mul_total *= g_space[number][i];
		i++;
	}
	if (plus_total == 10 && mul_total == 24)
		return (1);
	return (-1);
}

int	row_checking(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (row_one_four(i) == -1)
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int	col_one_four(int number)
{
	int	i;
	int	plus_total;
	int	mul_total;

	plus_total = 0;
	mul_total = 1;
	i = 0;
	while (i < 4)
	{
		plus_total += g_space[i][number];
		mul_total *= g_space[i][number];
		i++;
	}
	if (plus_total == 10 && mul_total == 24)
		return (1);
	return (-1);
}

int	col_checking(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col_one_four(i) == -1)
		{
			return (-1);
		}
		i++;
	}
	return (1);
}

int	check_same(void)
{
	if (col_checking() == -1)
		return (-1);
	if (row_checking() == -1)
		return (-1);
	return (1);
}
