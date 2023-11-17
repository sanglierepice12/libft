/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:48:47 by gostr             #+#    #+#             */
/*   Updated: 2023/11/16 13:24:18 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = ((char *)s);
	i = 0;
	while (str[i] && str[i] != c && i < n)
		i++;
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int arc, char **argv)
{
	if (arc < 1)
		return (0);
	printf("position carac : %p", ft_memchr(argv[1], 'h', 4));
	printf("\nposition carac : %p", memchr(argv[1], 'h', 4));
	return (0);
}*/