/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:49:38 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/08 09:31:47 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*s;

	nlist = ft_lstnew(void *);
	s = nlist;
	while (lst != NULL)
	{
		nlist = ft_lstnew(((*f)(lst->content)));
		if (nlist == NULL)
		{
			ft_lstclear(&s, (*del));
			return (NULL);
		}
		nlist = nlist->next;
		lst = lst->next;
	}
	return (s);
}*/
