/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 01:00:09 by tyeo              #+#    #+#             */
/*   Updated: 2021/08/25 04:53:36 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*new;

	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = (char *)malloc(sizeof(char) * size);
	if (!new)
		return (0);
	ft_strlcpy(new, s1, ft_strlen(s1) + 1);
	ft_strlcat(new, s2, size);
	return (new);
}

/*
int	main(void)
{
	char a[] = "hello world ";
	char b[] = "byeee";
	char *c = ft_strjoin(a, b);
	printf("The string of a and b combined string is: %s\n", c);
	printf("Address of a is %p\n", a);
	printf("Address of b is %p\n", b);
	printf("Address of c is %p\n", c);
	return (0);
}
*/