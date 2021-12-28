/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:27:10 by seucho            #+#    #+#             */
/*   Updated: 2021/12/28 16:33:18 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_lst *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	temp;

	new_lst = 0;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == 0)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp);
		lst = lst->next;
	}
	return (new_lst);
}
