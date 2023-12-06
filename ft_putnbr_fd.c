/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:45:16 by gsuter            #+#    #+#             */
/*   Updated: 2023/11/29 12:45:16 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == (-2147483648))
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd((n / 10), fd);
	n = (n % 10) + 48;
	ft_putchar_fd(n, fd);
}

/*
int	main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	ft_putnbr_fd(atoi(&argv[1][0]), 1);
	return (0);
}*/