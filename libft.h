/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:43:35 by gostr             #+#    #+#             */
/*   Updated: 2023/11/20 11:27:07 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int	ft_atoi(const char *str); // convertir char en int
int ft_isalpha(int c);// est-ce que le caractère est alphabetique ?
int ft_isdigit(int nb);// est-ce que le caractère est un chiffre ?
int ft_isalnum(int c);// est-ce que le caractère est un chiffre ou un alpha ?
int ft_isascii(int c);// est-ce que le caractère fait parti de la table ascii ?
int ft_isprint(int c);// est-ce que le caractère est printable ? (cf table ascii)
int	ft_strlen(const char *str);// quelle est la longueur de la string ?
int	ft_strncmp(const char *s1, const char *s2, size_t n);// n max position -1, y a t-il dès le départ les mêmes caractères
char	*ft_strnstr(char *haystack, char *needle, size_t len);// recherche la première occurrence d'une sous-chaîne dans s1 limitée à une longueur maximale de len caractères.
size_t	ft_strlcpy(char *str, char *dest, size_t size);// copie une string et remplace une autre string par la copie
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);// concatène une string dans une autre string
char    ft_toupper(int c);// met en majuscule un caractère
char    ft_tolower(int c);// met en minuscule un caractère
char    *ft_strchr(const char *s, int c);// cherche la premiere occurence d'un caractère dans une string
char	*ft_strrchr(const char *s, int c);// cherche la dernière occurence d'un caractère dans une string
void	*ft_memcpy(void *restrict destination, const void *restrict source, size_t size);// copie une valeur depuis une zone de mémoire source vers une zone de mémoire destination
void	*ft_memmove(void *destination, const void *source, size_t size);// copie une valeur depuis une zone de mémoire vers une autre (dest) en gérant chevauchement s'il y a
void	*ft_memset(void *pointer, int value, size_t count);// remplace la string par une valeur
void	*ft_memchr(const void *s, int c, size_t n);// cherche la première occurence d'un caractère octet par octet dans une zone de mémoire spécifiée
int	ft_memcmp(const void *s1, const void *s2, size_t n);// n max position - 1, y a t-il dès le départ les mêmes caractères depuis zone de mémoire source
void	ft_bzero(void *s, size_t n);// remet toutes la string à 0
// malloc using functions
char	*ft_strdup(const char *s1);// duplique dans une autre string et revoie un pointeur (allocation de mémoire)
void	*ft_calloc(size_t count, size_t size); //alloue dynamiquement de la mémoire en fonction du nombre d'octets demandé

#endif