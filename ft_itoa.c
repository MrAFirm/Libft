/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:05:53 by yachan            #+#    #+#             */
/*   Updated: 2024/06/20 18:56:28 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	alloc_len(int n)
{
	long	num;
	size_t	len;

	len = 1;
	num = n;
	if (n < 0)
		num = -num;
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	if (n < 0)
		return (len + 1);
	return (len);
}

static void	make_str(char **str, size_t len, int n, long num)
{
	size_t	og_len;

	og_len = len;
	while (len > 0)
	{
		(*str)[len - 1] = '0' + num % 10;
		num /= 10;
		len--;
	}
	if (n < 0)
		(*str)[0] = '-';
	(*str)[og_len] = '\0';
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*str;

	num = n;
	if (n < 0)
		num = -num;
	len = alloc_len(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	make_str(&str, len, n, num);
	return (str);
}

#include <stdio.h>
int main(void)
{
	int int_arr[] = {25, 18, 19, 789, 1483};
	for (int i = 0; i < 5; i++)
	{
		printf("og num: %i itoa: %s\n", int_arr[i], ft_itoa(int_arr[i]));
	}
	printf("og num: %i itoa: %s\n", INT_MAX, ft_itoa(INT_MAX));
	printf("og num: %i itoa: %s\n", INT_MIN, ft_itoa(INT_MIN));
}
