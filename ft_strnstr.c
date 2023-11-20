/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:38:14 by gostr             #+#    #+#             */
/*   Updated: 2023/11/20 10:56:48 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cmp(char *haystack, char *needle)
{
	size_t	i;

	i = 0;
	while (needle[i])
	{
		if (haystack[i] == needle[i])
			i++;
		else
			return (1);
	}
	return (0);
}

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t			i;
	unsigned int	needle_length;
	unsigned int	comp;

	i = 0;
	comp = ft_cmp(haystack + i, needle);
	needle_length = ft_strlen(needle);
	while (i < len && haystack[i])
	{
		while (haystack[i] == needle[i])
		{
			if (((i + needle_length) <= len) && comp == 0)
				return (haystack + i);
			i++;
		}
		i++;
	}
	return (NULL);
}
/*
#include<stdio.h>
#include<string.h>
int	main(int argc, char **argv)
{
	if (argc < 1)
		return 0;
	printf("strnstr : %s", strnstr(argv[1], argv[2], 4));
	printf("\nstrnstr : %s", ft_strnstr(argv[1], argv[2], 4));
	return(0);
}*/