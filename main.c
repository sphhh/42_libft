/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:58:14 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/26 09:04:22 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char	c;

	c = 'c';
	printf("-------------ft_isalpha------------\n");
	printf("%d\n", ft_isalpha(c++));
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
	printf("-------------ft_strlen------------\n");
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", ft_strlen("\0"));
	printf("%zu\n", ft_strlen("hajdfaskdjfhalsdfasdfjlkhasdlkjaslfasfaksldfjasçdlkf"));
	printf("%zu\n", ft_strlen("cinco"));
	printf("%zu\n", ft_strlen("\200"));
	printf("%zu\n", ft_strlen("\t"));
	printf("%zu\n", ft_strlen("334345343453535353453434534"));
	printf("%zu\n", ft_strlen("fgsdgsdgsdgsdfg\n\t"));
	printf("-------------ft_strtrim------------\n");
	char str0[42];
	strcpy(str0, "asdfasdfasdfasdfasdf");
	printf("%s\n",str0);
	ft_memset(str0, '$', 10);
	printf("%s\n",str0);	
	memset(str0, '#', 10);
	printf("%s\n",str0);









	printf("-------------ft_strtrim------------\n");
	printf("%s\n", ft_strtrim("        abacatekkkk  jjjjj", "k xmjl"));
	printf("---------------ft_itoa-------------\n");
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(INT_MIN));
	printf("-------------ft_putchar_fd------------\n");
	ft_putchar_fd('$', 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("oh my zsh!\n", 1);
	ft_putendl_fd("quebra de linha", 1);
	ft_putnbr_fd(-INT_MAX, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-INT_MIN, 1);
	ft_putchar_fd('\n', 1);
//	char	**string;

//	string = ft_split("aaaaaaaaaaaaaaaa8bbbbbbbbbbbbbbb8asfdfggshshshshh8", '8');
//		printf("%s\n", string[0]);
//		printf("%s\n", string[1]);
//		printf("%s\n", string[2]);
	return (0);
}
