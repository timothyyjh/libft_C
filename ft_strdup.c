/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 04:39:48 by tyeo              #+#    #+#             */
/*   Updated: 2021/08/11 17:49:13 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (&dest[0]);
}

/*
int	main(void)
{
	char	a[] = "hello";
	char	*b = ft_strdup(a);
	
	printf("This is the first string, %s\n", a);
	printf("This is the first address of string, %p\n", a);
	printf("This is the duplicated string, %s\n", b);
	printf("This is the second address of string, %p\n", b);
	return(0);
}
*/