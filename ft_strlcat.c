/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:00:25 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/17 11:54:22 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char	*str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (dst[a] && a < size)
		a++;
	while ((src[i]) && (i + a + 1) < size)
	{
		dst[a + i] = src[i];
		i++;
	}
	if (a != size)
		dst[a + i] = '\0';
	return (a + ft_strlen((char *)src));
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char src[42] = "aaaaaaaaaaaaaaaaaaa";
	char sr2[42] = "aaaaaaaaaaaaaaaaaaa";
	char dest[42] = "bbbbb";
	char des2[42] = "bbbbb";
// tentar implementar igual o da apple.
	printf("%lu\n", strlcat(dest, src, 20));
	printf("%s\n", dest);

	printf("%lu\n", ft_strlcat(des2, sr2, 20));
	printf("%s\n", des2);
	return(0);
}*/
