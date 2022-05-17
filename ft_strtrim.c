/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:51:10 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/17 15:54:44 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_set(char const	*s1, char const	*set)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (*set)
	{
		if (set[i] != s[k])
			i++;
		else

	}
	return (i);
}

int	ft_strlenc(char const *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int		i;
	char	*str;
	int		end;
	int		n;

	n = 0;
	end = ft_strlenc(s1) - ft_strlenc(set);
	str = malloc(sizeof(*s1) * ft_strlenc(s1));
	if (str == NULL)
		return (NULL);
	i = ft_is_set(s1, set);
		while (&s1[i] != &s1[end])
		{
			str[n] = s1[i];
			i++;
			n++;
		}
		str[n] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "f uuuuuuuuuuuuuuuidxgfh g f";
	char	find[] = "asdf";

	printf("output:%s\n", ft_strtrim(str, find));
	return (0);
}
