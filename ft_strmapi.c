/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:23:56 by gsuter            #+#    #+#             */
/*   Updated: 2023/11/29 10:23:56 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	i;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
void	coucou(int c, int (*to)(int))
{
	printf("carcatere = %c", (*to)(c));
}

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

int main(int argc, char **argv)
{
	int (*to)(int);
	//int (*toup)(int) = &ft_toupper;
	if (argc < 1)
		return 0;
	if (atoi(argv[1]) == 1)
		(to) = &ft_toupper;
	if (atoi(argv[1]) == 0)
		(to) = &ft_tolower;
	coucou(atoi(argv[2]), (*to));
	return 0;
}*/