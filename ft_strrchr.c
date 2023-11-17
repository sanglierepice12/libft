/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:09:12 by gostr             #+#    #+#             */
/*   Updated: 2023/11/16 12:31:21 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	
	i = ft_strlen((char *)s);
	while (s[i] != c)
		i--;
	if (s[i] == '\0')
		return (NULL);
	return (&((char *)s)[i]);
}

/*
int	main(int argc, char **argv)
{
	if (argc < 1)
		return 0;
	printf("le caractère c est : %p", ft_strrchr(argv[1], 'c'));
	printf("\nle caractère c est : %p", strrchr(argv[1], 'c'));
	return (0);
}
*/