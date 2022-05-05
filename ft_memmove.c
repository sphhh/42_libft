/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:54:25 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/05 15:40:39 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_zise;

void	*ft_memmove(void *str1, const void *str2, t_zise n)
{
	t_zise	i;
	char	*tempsrc;
	char	*tempdest;
	char	*buffer;

	tempsrc = (char *)str2;
	tempdest = (char *)str1;
	buffer = tempsrc;
	i = 0;
	while (i < n)
	{
		tempdest[i] = buffer[i];
		i++;
	}
	return (str1);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	// memmove use a buffer and memcpy does not;	
	char	str[] = "aaaaa bbbb ccc dd e";
	//char	dest[] = "";

	char	str2[] = "aaaaa bbbb ccc dd e";
	//char	dest2[] = "";

	memmove(str, str + 2, 7);
	printf("%s\n", str);
	ft_memmove(str2, str2 + 2, 7);
	printf("%s\n", str2);
	
	return (0);
}
