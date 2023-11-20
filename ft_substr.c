/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:18 by gostr             #+#    #+#             */
/*   Updated: 2023/11/20 12:23:49 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	unsigned int	slen;
	char	*dest;

	slen = ft_strlen(s);
	if (start > slen)
		return (NULL);
	if (len > slen)
		len = slen - start;
	i = start;
	j = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] || i < len)
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	dest[len] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if(argc <2)
		return (0);
	printf("valeur ft_retour : %s", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	return(0);
}*/