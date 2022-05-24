/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:18:39 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/24 16:09:01 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pointer_counter(const char	*s,	char	c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i + 1);
}
/*
char	**ft_split(char const	*s, char	c)
{
	
}
i*/

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_pointer_counter("aaaaaaaaaaaaaaa8aaaaaaaaaaaaafgdfg8asfgasfasdfsadfd8", '8'));
	return (0);
}
