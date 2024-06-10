/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:10:59 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/06/10 16:39:52 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t length)
{
    char    *str;
    size_t  index;

    str = (char *)s;
    index = 0;
    while (str[index] && index < length)
    {
        if ((unsigned char)str[index] == (unsigned char)c)
            return ((char *)s + index);
        str++;
    }
    return (NULL);
}





