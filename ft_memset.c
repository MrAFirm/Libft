/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:11:28 by yachan            #+#    #+#             */
/*   Updated: 2024/06/20 19:33:59 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		src[i] = (unsigned char)c;
		i++;
	}
	return (src);
}

#include <stdio.h>
int main(void)
{
	int arr[3] = {1,2,3};
	ft_memset(&arr, 0, 4);
	for (int i = 0; i < 3; i++)
		printf("%i\n", arr[i]);
}