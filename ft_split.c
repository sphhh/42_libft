/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:51:10 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/30 12:07:07 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


static int	ft_nwords(char const	*s, char	c)
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

static int	ft_start(char const	*s, char	c)
{
	int	i;

	i = 0;
	if (*s == c)
	{
		while (*s == c)
		{
			s++;
			i++;
		}
		return (i);
	}
	else if (*s != c)
		while (*s != c && *s)
		{
			s++;
			i++;
		}
		while (*s == c && *s)
		{
			s++;
			i++;
		}
	return (i);
}


static int	ft_len(char const	*s, char	c)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		s++;
		i++;
	}
	return (i);
}


char	**ft_split(char const	*s, char	c)
{
	char	**array;
	int		i;
	int		start;
	int		len;

	start = 0;
	len = 0;
	i = 0;
	if(!s || 0 == (array = malloc(sizeof(char *) * (ft_nwords(s, c) + 1))))
		return (0);
	if (s[start] != c)
	{
		len = ft_len(&s[start], c);
		array[i++] = ft_substr(s, start, len);
	}
	while (i <= ft_nwords(s, c) - 1)
	{
		start = start + ft_start(&s[start], c);
		len = ft_len(&s[start], c);
		array[i++] = ft_substr(s, start, len);
	}
	return (array);
}

/*
#include <stdio.h>

int main(void)
{
	int		i;
	char	**fvck;

	i = 0;
	printf("test nword\n");
	printf("%i\n", ft_nwords("------aaaaaaaaa----bbbbbbbbb----cccccccccc--d------e----", '-'));
	printf("%i\n", ft_nwords("aaaaaaaaa----bbbbbbbbb----cccccccccc--d------e----", '-'));
	printf("%i\n", ft_nwords("------aaaaaaaaa----bbbbbbbbb----cccccccccc--d------e", '-'));
	fvck = ft_split("------aaaaaaaaa----bbbbbbbbb----cccccccccc--d------e", '-');
	while (i <= 5)
		printf("%s\n", fvck[i++]);

	i = 0;
	fvck = ft_split("------aaaaaaaaa----bbbbbbbbb----cccccccccc--d------e", '-');
	while (i <= 5)
		printf("%s\n", fvck[i++]);

	i = 0;
	fvck = ft_split("aaaaaaaaa----bbbbbbbbb----cccccccccc--d------e", '-');
	while (i <= 5)
		printf("%s\n", fvck[i++]);

	i = 0;
	fvck = ft_split("------aaaaaaaaa----bbbbbbbbb----cccccccccc--d------ei--------", '-');
	while (i <= 5)
		printf("%s\n", fvck[i++]);

	i = 0;
	fvck = ft_split("split  iii||this|for|me|||||!|" , '|');
	while (i <= 5)
		printf("%s\n", fvck[i++]);


	return (0);
}*/
