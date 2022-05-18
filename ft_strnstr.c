/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:12:48 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/18 15:50:49 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		a = 0;
		while (big[i + a] == little[a] && (i + a < len))
		{
			a++;
			if (little[a] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{

//	char *s1 = "MZIRIBMZIRIBMZE123";
//	char *s2 = "MZIRIBMZE";


	char	s1[42] = "rio de janeiro";
	char	s2[42] = "ne";
//	size_t max = strlen(s2);
//	char *i1 = strnstr(s1, s2, max);
//	char *i2 = ft_strnstr(s1, s2, max);

	printf("%s\n", ft_strnstr(s1, s2, 11));
	printf("%s\n", strnstr(s1, s2, 11));
	return(0);
}*/
