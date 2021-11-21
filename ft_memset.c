/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 02:53:48 by tyeo              #+#    #+#             */
/*   Updated: 2021/08/11 05:21:31 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*schar;

	schar = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		schar[i] = c;
		i++;
	}
	return (s = schar);
}

/*
#include <stdio.h>
int	main()
{
	char a[] = "abcdefghijk";
	printf("%s\n", (char *)ft_memset(a, 'a', 99));
	return (0);
}
*/