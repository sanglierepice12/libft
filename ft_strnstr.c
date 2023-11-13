/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:51:43 by gostr             #+#    #+#             */
/*   Updated: 2023/11/08 13:16:46 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_comp(const char *haystack, const char *needle)
{
	
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	
	i = 0;
	while (i <= len && haystack[i])
	{
		
	}
}

int	main(int arc, char **argv)
{
	if (arc < 1)
		return (0);
	printf("%s", ft_strnstr(argv[1], argv[2], 10));
}
