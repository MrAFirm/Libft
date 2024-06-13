/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:18:29 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/06/13 20:49:39 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int     negative;
    long    result;

    negative = 1;
    result = 0;
    while ((*str == 32) || (*str >= 9 && *str <= 13))
            str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            negative *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (result * negative);
}
