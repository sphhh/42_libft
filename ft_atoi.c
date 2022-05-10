/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:40:23 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/10 14:35:29 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	signal;

	i = 0;
	nb = 0;
	signal = 1;
	while (str[i] == '	')
			i++;
	if (str[i++] == '-')
		signal = -signal;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb =  nb + (str[i] - '0');
		if	(str[i + 1] >= '0' && str[i + 1] <= '9')
			nb = nb * 10;
		i++;
	}
	return (nb * signal);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*num = "       353";
	printf("%d\n", atoi(num));
	printf("%d\n", ft_atoi(num));
	return (0);
}
