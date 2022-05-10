/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:47:20 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/10 10:57:26 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tempchar;

	i = 0;
	tempchar = (char *)s;
	while (i < n)
	{
		tempchar[i] = 'z';
		i++;
	}
}

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void	*vp;
	
	if	(size == 0 || nmemb == 0)
		return (NULL);
	else
	{
		vp = malloc(nmemb * size);
		ft_bzero(vp, nmemb * size);
		return (vp);
	}
}

#include <stdio.h>

int	main(void)
{
	char	*array;
	int	i;

	i = 0;
	array = (char *)ft_calloc(5, 4);
	while (i < 22)
	{
		if (array[i] == 0)
			printf("\\0");
		else
			printf("%c", array[i]);
		i++;
	}
	printf("\n");
	return(0);
}
