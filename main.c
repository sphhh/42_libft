/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:37:31 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/16 11:48:01 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[42] = "asdfasdf";
	printf("%i\n", ft_isdigit('5'));
	printf("%zu\n", ft_strlen(str));
	return (0);
}
