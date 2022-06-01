/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:13:30 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/01 08:58:59 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int	c)
{
	int	len;

	if (c == 0)
		return (1);
	len = 0;
	if (c < 0)
		len++;
	while (c)
	{
		c = c / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
}

/*

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%d\n", ft_intlen(-2147483648));
	return (0);
}
*/
