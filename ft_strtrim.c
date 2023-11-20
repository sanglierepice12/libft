/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:37:41 by gostr             #+#    #+#             */
/*   Updated: 2023/11/20 13:37:36 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_cmpare(const char s1, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	o;
	unsigned int	len;
	
	i = 0;
	o = 0;
	j = ft_strlen(s1);
	printf ("len j = %zu \n", j);
	while (ft_cmpare(s1[i], set) == 1)
		i++;
	while (ft_cmpare(s1[j - 1], set) == 1)
	{
		printf ("jony = %zu \n", j);
		j--;
	}
	len = j - i;
	printf ("len = %d \n", len);
	printf ("j = %zu \n", j);
	
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (s1[i] && i < j)
	{
		printf ("izi = %zu \n", i);
		dest[o] = s1[i];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if(argc < 1)
		return(0);

	printf("dest :%s", ft_strtrim(argv[1], argv[2]));
	return(0);
}*/