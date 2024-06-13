/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:24:55 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/06/12 19:02:58 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t length)
{
    const char *haystack;
    const char *needle;
    size_t  i;
 
    haystack = (const char *)big;
    needle = (const char *)little;
    i = ft_strlen(haystack);
    if (*needle == '\0')
        return ((char *)haystack);
    while (*haystack != '\0' && i < length)
    {
       if (ft_strncmp(haystack, needle, length - i) == 0)
       {
            return ((char *)haystack);
       }
       i++;
       haystack++;
    }
    return (NULL);
}
