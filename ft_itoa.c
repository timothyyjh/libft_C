/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 01:21:00 by tyeo              #+#    #+#             */
/*   Updated: 2021/08/15 22:11:55 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	size(int n)
{
	int	i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*putnum(char *num, int n)
{
	if (n < 0)
	{
		*num = '-';
		num++;
		if (n == -2147483648)
		{
			*num = '2';
			num++;
			n = 147483648;
		}
		else
			n *= -1;
	}
	if (n > 9)
	{
		num = putnum(num, (n / 10));
		num = putnum(num, (n % 10));
	}
	else
	{
		*num = '0' + n;
		num++;
		*num = '\0';
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;

	num = malloc(size(n) + 1);
	if (num == 0)
		return (0);
	putnum(num, n);
	return (num);
}

/*
int	main()
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
*/