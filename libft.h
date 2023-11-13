/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:43:35 by gostr             #+#    #+#             */
/*   Updated: 2023/11/08 12:43:36 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int ft_isalpha(int c);
int ft_isdigit(int nb);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(char *str);
char    ft_strlcpy(char *str, char *dest, size_t size);
char    ft_toupper(int c);
char    ft_tolower(int c);
char    *ft_strchr(const char *s, int c);

#endif