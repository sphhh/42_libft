/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:47:55 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/13 12:16:00 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_findfirst(const char *big, const char *little)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		a = 0;
		while (big[i + a] == little[a])
		{
			a++;
			if (little[a] == '\0')
				return ((char *)&big[i + a]);
		}
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	char	*str;

	str = (char *)malloc(ft_strlen(s1) * sizeof(*str));
	str = ft_findfirst(s1, set);
	return (str);

}

#include <stdio.h>

int	main(void)
{
	char	str[42] = "ZXZXpao de queijo baoZXZX";
	printf("%s\n", ft_strtrim(str, "ZXZX"));
	return (0);
}
