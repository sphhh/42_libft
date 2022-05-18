/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:10:27 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/18 14:29:25 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char const *str);
/*{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

char	*ft_strjoin(char const *s1, char const	*s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[42] = "abacate";
	char	str2[42] = "chocolate";
	
	printf("%s\n", ft_strjoin(str, str2));
	return (0);
} */
