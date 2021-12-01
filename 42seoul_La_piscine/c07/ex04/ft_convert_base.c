/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:10:26 by seucho            #+#    #+#             */
/*   Updated: 2021/10/25 02:04:12 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

long	change_mod(long nbr, int *cnt, int *len);
int		space(char c);
int		ft_nb(long nb, char *str);

int	arr_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (arr_len(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || space(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_idx_check(char nb, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (nb == base[i])
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_itoa(long nb, char *base)
{
	int		len;
	int		cnt;
	char	*p;
	int		i;

	len = 0;
	i = 0;
	cnt = 0;
	nb = change_mod(nb, &cnt, &len);
	len = len + ft_nb(nb, base);
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (0);
	if (cnt == 1)
	{
		p[0] = '-';
		i = 1;
	}
	while (i < len)
	{
		p[len - (!cnt) - i++] = base[nb % arr_len(base)];
		nb = nb / arr_len(base);
	}
	p[len] = '\0';
	return (p);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		min;
	long	result;

	min = 1;
	result = 0;
	if (check_base(base_from) == 0 || check_base(base_from) == 0)
		return (NULL);
	while (space(*nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*(nbr++) == '-')
			min = -1 * min;
	}
	while (ft_idx_check(*nbr, base_from) != -1)
	{
		result = result * arr_len(base_from);
		result = result + ft_idx_check(*nbr, base_from);
		nbr++;
	}
	return (ft_itoa(result * min, base_to));
}
