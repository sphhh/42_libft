/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:47:40 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/17 12:27:17 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s);

char	*ft_strdup(const char	*s)
{
	char	*string;
	size_t	i;

	i = 0;
	string = (char *)malloc(sizeof(*string) * (ft_strlen(s) + 1));
	if (string == NULL)
		return (NULL);
	while (s[i])
	{
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

/*
#include <stdio.h>

int	main (void)
{
	char	*str = "cópia, copy, kopi";
	printf("%s\n", ft_strdup(str));
	return (0);
}*/
