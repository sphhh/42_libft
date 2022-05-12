/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:12:48 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/12 10:50:27 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
		while (big[i + a] == little[a])
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
	char	string1[42] = "rio de janeiro";
	char	string2[42] = "ne";

	printf("%s\n", ft_strnstr(string1, string2, 12));
	printf("%s\n", strnstr(string1, string2, 12));
	return(0);
}*/
