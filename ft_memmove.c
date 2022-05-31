/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:54:25 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/31 10:52:35 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	n)
{
	size_t	i;

	i = n - 1;
	if (dst < (void *)src)
		ft_memcpy(dst, src, n);
	if (dst > (void *)src)
	{
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
		return (dst);
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// memmove use a buffer and memcpy does not;	
	char	str[42] = "123456789";
	//char	dest[] = "";

	char	str2[42] = "123456789";
	//char	dest2[] = "";

	memmove(str + 3, str, 10);
	printf("%s\n", str);
	ft_memmove(str2 + 3, str2, 10);
	printf("%s\n", str2);
	
	return (0);
}*/
