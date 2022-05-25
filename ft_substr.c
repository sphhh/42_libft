/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:26:36 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/25 08:42:30 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(len * sizeof(*str) + 1);
	if (str == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	string[42] = "some of the following funcions";
	printf("%s\n", string);
	printf("%s\n", ft_substr(string, 8, 10));
	return (0);
}*/
