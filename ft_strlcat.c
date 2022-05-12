/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:00:25 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/12 15:49:36 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char	*str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	max_len;

	i = 0;
	a = 0;
	max_len = ft_strlen(dst) - 1;
	while (dst[a])
		a++;
	while (src[i] && i < size && i < max_len)
		dst[a++] = src[i++];
	dst[a] = '\0';
	return (max_len + ft_strlen((char *)src));
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char src[42] = "aaaaaaaaiaaaaaaaaaaaaaa";
	char sr2[42] = "aaaaaaaaiaaaaaaaaaaaaaaa";
	char dest[42] = "bbbbb";
	char des2[42] = "bbbbb";
// tentar implementar igual o da apple.
	printf("%lu\n", strlcat(dest, src, 16));
	printf("%s\n", dest);

	printf("%lu\n", ft_strlcat(des2, sr2, 16));
	printf("%s\n", des2);
}

