/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:43:38 by gostr             #+#    #+#             */
/*   Updated: 2023/11/08 12:43:39 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include"libft.h"
#include<string.h>

int main(int arc, char **argv)
{
    if (arc < 1)
        return (0);
    printf("is nb ? : %d\n", ft_isalnum(argv[1][0]));
    printf("is nb ? : %d\n", isalnum(argv[1][0]));
    return (0);
}