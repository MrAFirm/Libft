/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:10:06 by yachan            #+#    #+#             */
/*   Updated: 2024/06/20 19:18:16 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		chr;
	size_t				i;

	src = (const unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*src == chr)
			return ((void *)src);
		src++;
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int main(void)
{
	if (ft_memchr("hello", 'a', 3) != NULL)
		printf("found\n");
	else
		printf("not found\n");
}