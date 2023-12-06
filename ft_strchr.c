/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:43:43 by gostr             #+#    #+#             */
/*   Updated: 2023/11/28 10:32:16 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != (unsigned char)c)
		i++;
	if (s[i] != (unsigned char)c)
		return (NULL);
	return (&((char *)s)[i]);
}
/*
#include <string.h>
#include <stdio.h>
int	main(int arc, char **argv)
{
	if (arc < 1)
		return (0);
	printf("le caractère : c est à la position : %p", ft_strchr(argv[1], 'c'));
	printf("\nle caractère : c est à la position : %p", strchr(argv[1], 'c'));
	return (0);
	}
*/