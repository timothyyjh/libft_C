/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 02:53:21 by tyeo              #+#    #+#             */
/*   Updated: 2021/08/25 04:48:34 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_atoi(const char *nptr)
{
	int		result;
	int		neg;
	size_t	sign;
	size_t	i;

	result = 0;
	sign = 0;
	neg = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			neg = -1;
		if (++sign > 1)
			return (0);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += (nptr[i++] - 48);
	}
	return (result * neg);
}

/* #include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char str[] = "   ---+--+1325632167fdsa";
	char str2[] = "+1325632168fdsa";
	printf("%d\n%d\n", ft_atoi(str), ft_atoi(str2));
	printf("%d\n%d\n", atoi(str), atoi(str2));
	
	char num[] = "-2147483648";
	char num2[] = "2147483648";
	printf("%d\n%d\n", ft_atoi(num), ft_atoi(num2));
	return (0);
} */