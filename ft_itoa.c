/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:13:30 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/02 11:37:51 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int c)
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
	char			*nb;
	int				s;
	unsigned int	nn;
	int				t;

	t = ft_intlen(n);
	s = 1;
	nb = malloc(sizeof(char) * t + 1);
	if (nb == NULL)
		return (NULL);
	if (n < 0)
	{
		s = -s;
		nn = -n;
	}
	else
		nn = n;
	nb[t--] = '\0';
	if (nn == 0)
		nb[t] = '0';
	while (nn > 0)
	{
		nb[t--] = nn % 10 + '0';
		nn = nn / 10;
	}
	if (s == -1)
		nb[t] = '-';
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_intlen(+1000));
	printf("%s\n", ft_itoa(0));
	return (0);
}
*/
