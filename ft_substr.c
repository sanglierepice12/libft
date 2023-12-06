/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:18 by gostr             #+#    #+#             */
/*   Updated: 2023/11/28 10:32:16 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned int	slen;
	char			*dest;

	slen = ft_strlen(s);
	if (start >= slen)
	{
		dest = malloc(sizeof (char));
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (len > slen - start)
		len = slen - start;
	i = start;
	j = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] || i < len)
		dest[j++] = s[i++];
	dest[len] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(int arc, char **argv)
{
	if (arc < 2)
		return (0);
	printf("ft_sbt = %s", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	return (0);
}*/