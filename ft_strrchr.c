/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:09:12 by gostr             #+#    #+#             */
/*   Updated: 2023/11/28 10:32:16 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen((char *)s);
	while (i && s[i] != (unsigned char)c)
		i--;
	if (s[i] != (unsigned char)c)
		return (NULL);
	return (&((char *)s)[i]);
}

/*int	main(int argc, char **argv)
{
	if (argc < 1)
		return 0;
	printf("le caractère c est : %s", ft_strrchr(argv[1], '\0'));
	printf("\nle caractère c est : %s", strrchr(argv[1], '\0'));
	return (0);
}*/
