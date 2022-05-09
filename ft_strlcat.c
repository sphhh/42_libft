/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:00:25 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/09 09:48:48 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
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

	printf("%lu\n", strlcat(dest, src, 4));
	printf("%s\n", dest);

	printf("%lu\n", ft_strlcat(dest2, src2, 4));
	printf("%s\n", dest2);
}

