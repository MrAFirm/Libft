/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:52:41 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/06/08 13:02:01 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

extern size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	size_t	dest_len;
	size_t	index;

	dest_len = 0;
	index = 0;
	while (dest[dest_len])
		dest_len++;
	while (dest_len + 1 >= length)
		return (dest_len + ft_strlen(src));
	while (src[index] && index < length - 1 - dest_len)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest_len + ft_strlen(src));
}
