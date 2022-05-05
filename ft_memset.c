/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:08:42 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/05 12:05:06 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_zise;

void	*ft_memset(void	*str, int c, t_zise	n)
{
	t_zise	i;
	char	*tchar;

	tchar = (char *)str;
	i = 0;
	while (i < n)
	{
		tchar[i] = c;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[42];

	strcpy(str, "asdfasdfasdfasdfasdf");
	printf("%s\n",str);
	ft_memset(str, '$', 10);
	printf("%s\n",str);	
	memset(str, '#', 10);
	printf("%s\n",str);
}*/
