/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:00:19 by gostr             #+#    #+#             */
/*   Updated: 2023/11/28 10:32:16 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	i;
	char	*d;
	char	*s;

	if (!src && !dst)
		return (NULL);
	d = ((char *) dst);
	s = ((char *) src);
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
