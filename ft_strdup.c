/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:46:10 by gostr             #+#    #+#             */
/*   Updated: 2023/11/20 10:48:16 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}

	dest[len] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	printf("pointer = %s", ft_strdup(argv[1]));
	printf("\npointer = %s", strdup(argv[1]));
	return (0);
}*/