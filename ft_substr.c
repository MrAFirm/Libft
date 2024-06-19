/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:14:57 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/06/18 12:54:38 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, size_t start, size_t len)
{
	size_t	substring_length;
	size_t	finish;
	char	*dest;

	if (!src)
		return (0);
	substring_length = ft_strlen(src);
	finish = 0;
	if (start < len)
		finish = substring_length - start;
	if (finish > len)
		finish = len;
	dest = malloc(sizeof(char) * (finish + 1));
	if (!dest)
		return (0);
	ft_strlcpy (dest, src + start, finish + 1);
	return (dest);
}