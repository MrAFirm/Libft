/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:41:56 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/06/13 20:27:38 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include <unistd.h>

void	ft_bzero(void *ptr, size_t number);
int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(int i);
int		ft_isprint(int i);
void	*ft_memcpy(void *dest, const void *src, size_t length);
void	*ft_memmove(void *dest, const void *src, size_t length);
void	*ft_memset(void *ptr, int value, size_t number);
char	*ft_strchr(const char *str, int c);
extern size_t	ft_strlcat(char *dest, const char *src, size_t length);
extern size_t ft_strlcpy(char *dest, const char *src, size_t length);
int		ft_strlen(const char *str);
char	*ft_strrchr(const char *str, int c);
int	ft_tolower(int i);
int	ft_toupper(int i);
int	ft_strncmp(const char *s1, const char *s2, size_t length);
void    *ft_memchr(const void *s, int c, size_t length);
int ft_memcmp(const void *s1, const void *s2, size_t length);
char    *ft_strnstr(const char *big,	const char *little, size_t length);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t length);
char	*ft_strdup(const char *src);

#endif
