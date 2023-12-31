/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:37:41 by gostr             #+#    #+#             */
/*   Updated: 2023/11/28 12:33:42 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmpare(const char s1, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isblank(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	while (s1[i])
	{
		count = 0;
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				count = 1;
			j++;
		}
		if (!count)
			return (count);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	o;

	i = 0;
	o = 0;
	j = ft_strlen(s1);
	if (ft_isblank(s1, set) || ft_strlen(s1) == 0)
		return (ft_calloc(1, 1));
	while (ft_cmpare(s1[i], set) == 1)
		i++;
	while (ft_cmpare(s1[j - 1], set) == 1)
		j--;
	if (i > j)
		return (NULL);
	dest = malloc(sizeof(char) * ((j - i) + 1));
	if (!dest)
		return (NULL);
	while (s1[i] && i < j)
		dest[o++] = s1[i++];
	dest[o] = '\0';
	return (dest);
}

//#include <stdio.h>
//int	main(int argc, char **argv)
//{
//	if(argc < 1)
//		return(0);
//	printf("dest :%s", ft_strtrim(argv[1], argv[2]));
//	return(0);
//}