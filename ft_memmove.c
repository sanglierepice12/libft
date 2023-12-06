/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:16:11 by gostr             #+#    #+#             */
/*   Updated: 2023/11/28 12:30:03 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	if (!dest && !src)
		return (dest);
	if (src < dest)
	{
		while (size-- > 0)
			((unsigned char *)dest)[size] = ((unsigned char *)src)[size];
	}
	else
		ft_memcpy(dest, src, size);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	printf("destination : %s", argv[1]);
	printf("\ndestination : %s\n", argv[3]);
	ft_memmove(argv[1], argv[2], 4);
	memmove(argv[3], argv[4], 4);
	printf("destination : %s", argv[1]);
	printf("\ndestination : %s", argv[3]);
	return(0);
}*/