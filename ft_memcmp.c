/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:49:00 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/09 11:21:48 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char *temp;
	char *temp2;

	temp = (char *)str1;
	temp2 =  (char *)str2;
	i = 0;
	while (temp[i] && i < n)
	{
		if (temp[i] != temp2[i])
			return (temp[i] - temp2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main (void)
{
	char	str[42] = "aaazaabccccccccc";
	char	st2[42] = "aaaaaabccccccccc";

	printf("%d\n", memcmp(str, st2, 15));
	printf("%d\n", ft_memcmp(str, st2, 15));
	return (0);
}*/
