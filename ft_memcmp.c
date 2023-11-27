/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:09:28 by gostr             #+#    #+#             */
/*   Updated: 2023/11/20 11:05:09 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = ((const unsigned char *)s1);
	str2 = ((const unsigned char *)s2);
	while (str1[i] || (str2[i] && i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
 int	main(int argc, char **argv)
 {
	if (argc < 1)
		return 0;
	printf("compare : %d\n", ft_memcmp(argv[1], argv[2], 4));
	printf("compare : %d\n", ft_memcmp(argv[1], argv[2], 4));
	return (0);
}*/
