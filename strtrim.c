	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:45:40 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/19 15:52:00 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*str = "x ping pong x";
	char	*set = "xz ";
	char	*asf;

	asf = ft_strtrim(str, set);
	printf("%s\n", asf);
	return (0);
}
