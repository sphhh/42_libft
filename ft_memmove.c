/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:54:25 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/30 10:52:02 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	n)
{
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

	memmove(str, str + 5, 10);
	printf("%s\n", str);
	ft_memmove(str2, str2 + 5, 10);
	printf("%s\n", str2);
	
	return (0);
}*/
