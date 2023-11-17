/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gsuter@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:38:14 by gostr             #+#    #+#             */
/*   Updated: 2023/11/16 13:38:35 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_cmp(char haystack, char needle)
{
	if (haystack == needle)
		return (0);
	return (1);
}

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && ft_cmp(haystack[i], needle[j]) == 1)
		{
			j++;
			if (needle[j] == '\0')
				return (haystack + i);
			i++;
		}
	}
	return (NULL);
}

#include<stdio.h>
#include<string.h>
int	main(int argc, char **argv)
{
	if (argc < 1)
		return 0;
	printf("strnstr : %s", strnstr(argv[1], argv[2], 4));
	printf("\nstrnstr : %s", ft_strnstr(argv[1], argv[2], 4));
	return(0);
}