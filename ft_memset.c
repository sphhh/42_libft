/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:08:42 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/10 12:00:47 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void	*str, int c, size_t	n)
{
	size_t	i;
	char	*tchar;

	tchar = (char *)str;
	i = 0;
	while (i < n)
	{
		tchar[i] = c;
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[42];

	strcpy(str, "asdfasdfasdfasdfasdf");
	printf("%s\n",str);
	ft_memset(str, '$', 10);
	printf("%s\n",str);	
	memset(str, '#', 10);
	printf("%s\n",str);
}
