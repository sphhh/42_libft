/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:58:14 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/01 10:18:08 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <strings.h>

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
	printf("--------------ft_bzero-------------\n");
	char st2[] = "qwer";
	char str[9] = "qwer";
	int		i;

	i = 0;
	printf("%s\n", str);
	bzero(str, 7);
	printf("%s\n", st2);
	ft_bzero(st2, 7);
	while (i <= 10)
	{
		if (str[i] == st2[i])
			i++;
		else
			printf("fvck");
			break ;
	}
	printf("OK");
	printf("\n");

	printf("-------------ft_memcpy-------------\n");
	

	printf("-------------ft_memmove------------\n");
	printf("-------------ft_strchr-------------\n");
	printf("-------------ft_strncmp------------\n");
	printf("-------------ft_memchr-------------\n");
	printf("-------------ft_memcmp-------------\n");
	printf("-------------ft_strrchr------------\n");
	printf("-------------ft_strnstr------------\n");
	printf("--------------ft_atoi--------------\n");
	printf("-------------ft_strlcpy------------\n");
	printf("-------------ft_strlcat------------\n");
	printf("-------------ft_strdup-------------\n");
	printf("-------------ft_substr-------------\n");
	printf("-------------ft_calloc-------------\n");
	printf("-------------ft_strjoin------------\n");
	printf("-------------ft_strtrim------------\n");
	printf("--------------ft_itoa--------------\n");
	printf("-------------ft_strmapi------------\n");
	printf("-------------ft_striteri-----------\n");
	printf("------------ft_putchar_fd----------\n");
	printf("------------ft_putstr_fd-----------\n");
	printf("------------ft_putendl_fd----------\n");
	printf("------------ft_putnbr_fd-----------\n");
	printf("--------------ft_split-------------\n");







	printf("-------------ft_strtrim------------\n");
	printf("%s\n", ft_strtrim("   ", "    "));
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
