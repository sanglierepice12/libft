/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:37:23 by gostr             #+#    #+#             */
/*   Updated: 2023/11/08 11:37:23 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	minus;

	minus = 1;
	i = -1;
	result = 0;
	while (++i, str[i] > 8 && str[i] < 14 || str[i] == 32)
		;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	if (ft_isdigit(str[i]) == 0)
		return (0);
	while (str[i] || ft_isdigit(str[i]) != 0)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * minus);
}
