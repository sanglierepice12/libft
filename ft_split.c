/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:30:46 by gsuter            #+#    #+#             */
/*   Updated: 2023/11/28 12:36:34 by gsuter           ###   ########.fr       */
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

static char	**ft_clear(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
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
	dest = malloc(sizeof(char *) * (count_words + 1));
	if (!dest)
		return (NULL);
	while (s[j])
	{
		if (s[j] != c)
		{
			dest[i] = ft_dup(s, c, &j);
			if (!dest[i])
				return (ft_clear(dest));
			i++;
		}
		else
			j++;
	}
	dest[i] = 0;
	return (dest);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
    char	**dest;
	size_t	i;
    dest = ft_split("lorem\n"
					"ipsum\n"
					"dolor\n"
					"sit\n"
					"amet,\n"
					"consectetur\n"
					"adipiscing\n"
					"elit.\n"
					"Sed\n"
					"non\n"
					"risus.\n"
					"Suspendisse",'\n');
	i = 0;
	//printf("len : %zu \n", strlen("hello ca va"));
	while (dest[i])
	{
		printf("dest = %s\n", dest[i]);
		i++;
	}
	return (0);
}*/