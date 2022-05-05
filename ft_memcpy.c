/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:12:22 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/05 15:04:41 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_zise;

void	*ft_memcpy(void *dest, const void *src, t_zise n)
{
	t_zise	index;
	char	*temp;
	char	*tempsrc;

	temp = (char *)dest;
	tempsrc = (char *)src;
	index = 0;
	while (index < n)
	{
		temp[index] = tempsrc[index];
		index++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str[42] = "one twooo three four";
	//char dest[42];
	
	char str2[42] = "one twooo three four";
	//char dest2[42];
	memcpy(str, str + 4, 3 * sizeof(char));
	printf("output: %s\n", str);
	ft_memcpy(str2, str2 + 4, 3 * sizeof(char));
	printf("output: %s\n", str2);
}
