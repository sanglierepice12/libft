/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:16:11 by gostr             #+#    #+#             */
/*   Updated: 2023/11/17 16:56:15 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	char	*s;
	char	*d;
	size_t	i;

	s = ((char *) source);
	d = ((char *) destination);
	i = 0;
	if(s < d && s + size > d) // vérification si superposition des chaines
	{
		i = size;
		while (i > 0)
		{
			s[i - 1] = d[i - 1];
			i--;
		}
	}
	else // copie car pas de superposition --> optimisation
		ft_memcpy(destination, source, size);
	return (destination);
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