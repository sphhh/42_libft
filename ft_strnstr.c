/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:12:48 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/09 11:11:20 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t i;
	size_t a;

	i = 0;
	if (find[0] == '\0')
		return ((char *)s);
	while (s[i] && i < len)
	{
			a = 0;
			while (s[i + a] == find[a])
			{
				a++;
				if (find[a] == '\0')
						return ((char *)&s[i]);
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
