/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:43:43 by gostr             #+#    #+#             */
/*   Updated: 2023/11/14 16:27:17 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	
	while (s[i])
	{
		if (s[i] == c)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&((char *)s)[i]);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(int arc, char **argv)
{
	if (arc < 1)
		return (0);
	char *k = ft_strchr(argv[1], 'c');
	char *l = strchr(argv[2], 'c');
	printf("fonction : %s", k);
	printf("\nfonction : %s", l);
	return (0);
	}
*/