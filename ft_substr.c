/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:18 by gostr             #+#    #+#             */
/*   Updated: 2023/12/12 11:36:19 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_crash(char *dest)
{
	dest = malloc(sizeof (char));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned int	slen;
	char			*dest;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	dest = NULL;
	if (start >= slen)
		return (ft_crash(dest));
	if (len > slen - start)
		len = slen - start;
	i = start;
	j = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] && i < len + start)
		dest[j++] = s[i++];
	dest[len] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
//	printf("ft_sbt = %s\n", ft_substr("gnjerngwngjbwegbwjgbkjwebgjgkjwebgbwkjgb
//	webgwebgwebkjgwekjgwegkjwebgkjwebgkjwebgwebgjwebgjwbegwebkjgwebgw", 0, 5));
//	printf("ft_sbt = %s\n", ft_substr("gnjerngwngjbwegbwjgbkjwebgjggwebgwebkjgw
//	ekjgwegkjwebgkjwebgkjwebgwebgjwebgjwbegwebkjgwebgw", 10000, 5));
//	printf("ft_sbt = %s\n", ft_substr("gnjerngwngjbwegbwjgbkjwkjwebgwebgwebkjgwe
//	kjgwegkjwebgkjwebgkjwebgwebgjwebgjwbegwebkjgwebgw", 0, 0));
//	printf("ft_sbt = %s\n", ft_substr("", 10000, 5));
	printf("coucou ft_sbt = %s\n", ft_substr("1234", 2, 0));
//	printf("ft_sbt = %s\n", ft_substr("", 0, 0));

	return (0);
}*/