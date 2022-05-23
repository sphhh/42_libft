/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:54:25 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/20 13:53:45 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static void	*testtbf(void	*dest, const void	*src, size_t n)
{
	uint8_t	*from;
	uint8_t	*to;
	size_t	i;

	from = (uint8_t *) src;
	to = (uint8_t *) dest;
	i = n - 1;
	while (i >= 0)
	{
		to[i] = from[i];
		i--;
	}
	return (dest);
}

static void	*testfbt(void *dest, const void *src, size_t	n)
{	
	uint8_t	*from;
	uint8_t	*to;
	size_t	i;

	from = (uint8_t *) src;
	to = (uint8_t *) dest;
	i = 0;
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void	*dst, const void	*src, size_t	n)
{
	uint8_t	*from;
	uint8_t	*to;

	from = (uint8_t *) src;
	to = (uint8_t *) dst;
	if (from == to || n == 0)
		return (dst);
	if (to > from && to - from < (int)n)
	{
		testtbf (dst, src, n);
		return (dst);
	}
	if (from > to && from - to < (int)n)
	{
		testfbt(dst, src, n);
		return (dst);
	}
	ft_memcpy(dst, src, n);
	return (dst);
}

/*
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
}*/
