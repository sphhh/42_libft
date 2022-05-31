/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:56:16 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/31 08:38:58 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}

/*
char	ft_plus_x(unsigned int	i, char	c)
{
	i = 1;
	c = 'A';
	return (c * i);
}

#include <stdio.h>

int	main(void)
{
	const char *s = "abcde";

	printf("%s\n", ft_strmapi(s, ft_plus_x));
	return (0);
}*/
