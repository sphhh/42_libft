/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:36:01 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/12 10:38:46 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char *)str;
	i = 0;
	while (temp[i] && i < n)
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
	char	str[42] = "aaadasdsadas";

	printf("%s\n", ft_memchr(str, 'd', 5));
	return (0);
}
*/
