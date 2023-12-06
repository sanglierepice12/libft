/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:34:56 by gostr             #+#    #+#             */
/*   Updated: 2023/11/28 10:32:16 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	dest = malloc(size * count);
	if (!dest)
		return (NULL);
	ft_bzero(dest, size * count);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char** argv)
{
	if(argc <1)
		return (0);
	printf("ft_dest = %p", ft_calloc(atoi(argv[1]), atoi(argv[2])));
	printf("\nft_dest = %p", calloc(atoi(argv[1]), atoi(argv[2])));
}*/