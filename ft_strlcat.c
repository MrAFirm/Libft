/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:52:41 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/06/07 15:30:01 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

extern size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	size_t target_byte_1;
	size_t target_byte_2;

	target_byte_1 = 0;
	target_byte_2 = 0;
	while (dest[target_byte_1] != '\0')
		target_byte_1++;
	while (src[target_byte_2] != '\0' && target_byte_2 < length - 1)
	{
		dest[target_byte_1 + target_byte_2] = src[target_byte_2];
		target_byte_2++;
	}
	dest[target_byte_1 + target_byte_2] = '\0';
	return (target_byte_2 + ft_strlen(src));
}
