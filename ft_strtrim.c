/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:31:20 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/23 11:11:16 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_set(char const s1, char const *set)
{
	while (*set)
	{
		if (s1 == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const *set)
{
	int	start;
	int	max_size;

	start = 0;
	max_size = ft_strlen(s1);
	while (ft_is_set(s1[start], set))
		start++;
	while (ft_is_set(s1[max_size - 1], set))
		max_size--;
	return ((char *)ft_substr(s1, start, max_size - start));
}
