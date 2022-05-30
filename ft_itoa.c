/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:13:30 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/30 12:12:39 by vipereir         ###   ########.fr       */
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
	char	*nb;
	size_t	i;
	size_t	s;

	s = 0;
	i = ft_intlen(n);
	nb = (char	*)malloc((sizeof(*nb) * ft_intlen(n)) + 1);
	if (!nb || nb == NULL)
		return (NULL);
	if ( n == -2147483648)
	{
		nb = "-2147483648";
		return(nb);
	}
	if (n < 0)
	{
		n = -n;
		s = 1;
	}
	nb[ft_intlen(n)] = '\0';
	while (i-- > 0)
	{
		nb[i] = (n % 10) + 48;
		n = n / 10;
	}
	if (s == 1)
		nb[0] = '-';
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(-10000000));
	return (0);
}
*/
