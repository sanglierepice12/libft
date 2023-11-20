/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:11:53 by gostr             #+#    #+#             */
/*   Updated: 2023/11/17 10:33:41 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(dst);
	
	while(i < dstsize)
	{
		dst[length] = src[i];
		i++;
		length++;
	}
	 while (i < dstsize)
    {
        dst[i] = '\0';
        i++;
    }
	return (length + ft_strlen((char *)src));
}