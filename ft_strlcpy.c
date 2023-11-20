/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:43:26 by gostr             #+#    #+#             */
/*   Updated: 2023/11/17 16:27:43 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char *src, char *dest, size_t size)
{
    size_t i;

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
    return (ft_strlen(src));
}