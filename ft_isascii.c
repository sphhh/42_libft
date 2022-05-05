/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:28:38 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/04 10:44:12 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int n;

	n = 'd';
	printf("output: %i\n", ft_isascii(n));
	printf("output: %i\n", isascii(n));
}*/
