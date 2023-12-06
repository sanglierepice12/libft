/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:29:14 by gsuter            #+#    #+#             */
/*   Updated: 2023/12/04 11:11:00 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_numchar(long int result, size_t minus, char *dest, size_t len)
{
	if (minus)
	{
		dest[0] = '-';
		len++;
	}
	while (len - minus)
	{
		dest[len - 1] = result % 10 + 48;
		result /= 10;
		len--;
	}
	return (dest);
}

static char	*ft_mallouk(char *dest, unsigned int nb, unsigned int *len, int m)
{
	while (nb > 0)
	{
		nb /= 10;
		*len = *len + 1;
	}
	dest = ft_calloc(sizeof(char),*len + m + 1);
	return (dest);
}

char	*ft_itoa(int nb)
{
	char			*dest;
	unsigned int	len;

	len = 0;
	dest = NULL;
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb < 0)
	{
		dest = ft_mallouk(dest, nb * -1, &len, 1);
		if (!dest)
			return (NULL);
		dest = ft_numchar(nb * -1, 1, dest, len);
	}
	else
	{
		dest = ft_mallouk(dest, nb, &len, 0);
		if (!dest)
			return (NULL);
		dest = ft_numchar(nb, 0, dest, len);
	}
	return (dest);
}

/* <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("nb = %s", ft_itoa(atoi(argv[1])));
	return (0);
}*/