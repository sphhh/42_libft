/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:36:01 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/19 12:14:14 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char *)str;
	i = 0;
	while (i < n)
	{
		if (temp[i] == c)
			return ((void *)&temp[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[42] = "aaada\0dsadas";

	printf("%s\n", ft_memchr(str, '\0', 5));
	return (0);
}
*/
