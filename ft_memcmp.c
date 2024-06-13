/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:24:36 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/06/12 14:25:22 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t length)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t index;

    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    index = 0;
    while (index < length)
    {
        if (str1[index] != str2[index])
            return (str1[index] - str2[index]);
        index++; 
    }
    return (str1[index] - str2[index]);
}