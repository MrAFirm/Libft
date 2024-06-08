/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:32:05 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/06/06 17:40:44 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	size_t target_byte;

	target_byte_1 = 0;
	while (target_byte < length)
	{
		((char *)dest)[target_byte] = ((char *)src)[target_byte];
		target_byte++;
	}
	while 
