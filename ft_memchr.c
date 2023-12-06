/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:48:47 by gostr             #+#    #+#             */
/*   Updated: 2023/11/28 10:32:16 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)s)[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return (&((unsigned char *)s)[i]);
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