/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:52:15 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/06 14:06:47 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	p = *lst;
	while (*lst != NULL)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst,(*del));
		*lst = p;
	}
	*lst = NULL;
}
