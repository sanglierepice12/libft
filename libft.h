/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:43:35 by gostr             #+#    #+#             */
/*   Updated: 2023/11/15 12:17:01 by gostr            ###   ########.fr       */
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
int	ft_strlen(char *str);
size_t	ft_strlcpy(char *str, char *dest, size_t size);
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
char    ft_toupper(int c);
char    ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memcpy(void *restrict destination, const void *restrict source, size_t size);
void	*ft_memmove(void *destination, const void *source, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
void	ft_bzero(void *s, size_t n);

#endif