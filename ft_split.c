/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:51:10 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/27 14:05:14 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


static int	nwords(char const	*s, char	c)
{
	int		i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s != c && *s) 
				s++;
		}
		while (*s == c && *s)
			s++;
	}
	return (i);
}

char	**ft_split(char const	*s, char	c)
{
	char	**array;
	int	i;

	i = 0;
	if(!s || 0 == (array = malloc(sizeof(char *) * (nwords(s, c) + 1))))
		return (0);
	while (i <= nwords(s, c) - 1)
	{
		array[i++] = ft_strdup(s);
	}
	return (array);
}

#include <stdio.h>

int main(void)
{
	int		i;
	char	**fvck;

	i = 0;
	printf("test nword");
	printf("%i\n", nwords("------aaaaaaaaa----bbbbbbbbb----cccccccccc--d------e----", '-'));
	printf("%i\n", nwords("aaaaaaaaa----bbbbbbbbb----cccccccccc--d------e----", '-'));
	printf("%i\n", nwords("------aaaaaaaaa----bbbbbbbbb----cccccccccc--d------e", '-'));
	fvck = ft_split("------aaaaaaaaa----bbbbbbbbb----cccccccccc--d------e", '-');
	while (i <= 5)
		printf("%s\n", fvck[i++]);
	return (0);
}
