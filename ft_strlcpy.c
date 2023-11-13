/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:43:26 by gostr             #+#    #+#             */
/*   Updated: 2023/11/13 15:05:21 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_strlcpy(char *src, char *dest, size_t size)
{
    int i;

    i = 0;
    while (src[i] && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < size)
    {
        dest[i] = '\0';
        i++;
    }
    return (i + 1);
}