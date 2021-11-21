/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 02:53:51 by tyeo              #+#    #+#             */
/*   Updated: 2021/09/05 21:48:04 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	k = 0;
	while (dst[i])
		i++;
	j = i;
	if (size < j)
		j = size;
	while (src[k] && i < (size - 1) && size != 0)
	{
		dst[i] = src[k];
		k++;
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (j + i);
}

/*
#include <stdio.h>
int	main()
{
	char a[] = "hello ";
	char b[] = "timothy";

	printf("%d\n", ft_strlcat(a, b, 9));
	printf("%s\n", a);
}
*/