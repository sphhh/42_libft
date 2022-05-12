/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:00:25 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/12 10:14:25 by vipereir         ###   ########.fr       */
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
	size_t	len;

	len = ft_strlen(dst) + ft_strlen((char *)src);  
	i = 0;
	a = 0;
	while (dst[a] && a < size)
		a++;
	while (src[i] && a < size - 1)
		dst[a++] = src[i++];
	return (len);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char src[42] = "aaaaaaaaa";
	char src2[42] = "aaaaaaaaa";
	char dest[42] = "bbbbb";
	char dest2[42] = "bbbbb";

	printf("%lu\n", strlcat(dest, src, 2));
	printf("%s\n", dest);

	printf("%lu\n", ft_strlcat(dest2, src2, 2));
	printf("%s\n", dest2);
}

