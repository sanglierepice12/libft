/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:00:19 by gostr             #+#    #+#             */
/*   Updated: 2023/11/17 11:15:55 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict destination, const void *restrict source, size_t size)
{
	size_t	i;
	char *d;
	char *s;

	d = ((char *) destination);
	s = ((char *) source);
	i = 0;
	
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
