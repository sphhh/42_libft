/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:04:10 by vipereir          #+#    #+#             */
/*   Updated: 2022/02/18 04:14:46 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != 0 && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	unsigned int n;
// 	int c;
// 	char	string1[20] = "aaaasddaaaa";
// 	char	string2[20] = "aaaabaaaa";

// 	n = 5;
// 	c = ft_strncmp(string1, string2, n);
// 	printf("(ft_strcmp) VALUE: %d\n", c);
// 	c = strncmp(string1, string2, n);
// 	printf("(strcmp) VALUE: %d\n", c);
// }