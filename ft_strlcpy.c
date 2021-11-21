/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 02:53:52 by tyeo              #+#    #+#             */
/*   Updated: 2021/09/05 23:54:17 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *source, size_t size)
{
	size_t	i;

	if (!source)
		return (0);
	if (!size)
		return (ft_strlen(source));
	i = 0;
	while (source[i] && i < (size - 1))
	{
		dst[i] = source[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(source));
}

/* #include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char a[999] = "hello";
	char b[999] = "";

	printf("%ld\n", ft_strlcpy(b, a, 4));
	printf("%ld\n", strlcpy(b, a, 4));
	return (0);
} */