/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:12:34 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/06 10:12:40 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen((char *)str) - 1;
	while (str[len])
	{
		if (str[len] == c)
			return ((char *)&str[len]);
		len--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[42] = "aaaaaaaaabbbbcccccccbcccccccc";
	char	string2[42] = "aaaaaaaaabbbbccccccbcccccccc";


	printf("%s\n", strrchr(string, 'b')); 	
	printf("%s\n", ft_strrchr(string2, 'b')); 
	return(0);
}
*/
