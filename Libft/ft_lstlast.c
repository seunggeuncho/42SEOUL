/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:24:09 by seucho            #+#    #+#             */
/*   Updated: 2021/12/28 15:26:05 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->new)
		lst = lst->next;
	return (lst);
}
