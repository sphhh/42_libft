/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:58:14 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/23 11:18:51 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'c';
	printf("-------------ft_isalpha------------\n");
	printf("%d\n", ft_isalpha(c));
	printf("-------------ft_isdigit------------\n");
	printf("%d\n", ft_isdigit(c));
	printf("-------------ft_isalnum------------\n");
	printf("%d\n", ft_isalnum(c));
	printf("-------------ft_isascii------------\n");
	printf("%d\n", ft_isascii(c));
	printf("-------------ft_isprint------------\n");
	printf("%d\n", ft_isprint(c));
	printf("-------------ft_toupper------------\n");
	printf("%c\n", ft_toupper(c));
	printf("-------------ft_tolower------------\n");
	printf("%c\n", ft_tolower(c));
	printf("-------------ft_strtrim------------\n");
	printf("%s\n", ft_strtrim("        abacatekkkk  jjjjj", "k xmjl"));
	printf("---------------ft_itoa-------------\n");
	printf("%s\n", ft_itoa(1234));

	return (0);
}
