/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 02:53:49 by tyeo              #+#    #+#             */
/*   Updated: 2021/08/25 02:39:43 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] || (str[i] == '\0' && c == '\0'))
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char a[] = "\0";
	printf("%s\n", ft_strchr(a, 0));
	return (0);
}
*/