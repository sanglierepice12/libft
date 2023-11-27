/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>                +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:56:21 by gsuter             #+#    #+#            */
/*   Updated: 2023/11/21 10:05:15 by gsuter            ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, char c)
{
	size_t	count;
	size_t	in_word;
	size_t	i;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	*ft_dup(char const *s, char c, size_t *j)
{
	char	*dest;
	size_t	worden;
	size_t	i;

	i = 0;
	worden = ft_wordlen(&s[*j], c);
	dest = malloc(sizeof(char) * (worden + 1));
	if (!dest)
		return (NULL);
	while (s[*j] != c && i < worden && s[*j])
	{
		dest[i] = s[*j];
		*j = *j + 1;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	size_t	count_words;
	size_t	j;
	size_t	i;
	char	**dest;

	i = 0;
	j = 0;
	count_words = ft_countwords(s, c);
	dest = malloc(sizeof(char) * (count_words + 1));
	if (!dest)
		return (NULL);
	while (s[j])
	{
		if (s[j] != c)
		{
			dest[i] = ft_dup(s, c, &j);
			i++;
		}
		else
			j++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <string.h>
int	main(void)
{
    char	**dest;
	size_t	i;
    dest = ft_split(" hello ca va ",' ');
	i = 0;
	//printf("len : %zu \n", strlen("hello ca va"));
	printf("dest[0] = %c\n", dest[0][0]);
	while (dest[i])
	{
		printf("dest = %s\n", dest[i]);
		i++;
	}
	return (0);
}*/