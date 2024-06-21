/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:02:28 by yachan            #+#    #+#             */
/*   Updated: 2024/06/20 18:42:53 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	op;
	int	results;

	op = 1;
	results = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			op *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		results = results * 10 + (*nptr - '0');
		nptr++;
	}
	return (results * op);
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char test[15] = "21474\\083648";

	printf("expected: %d\nreality: %d\n", atoi(test), ft_atoi(test));
}