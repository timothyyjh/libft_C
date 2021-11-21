/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:14:14 by tyeo              #+#    #+#             */
/*   Updated: 2021/09/07 19:59:43 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n != 0)
	{
		i = 0;
		while (i < n)
		{
			if (*((unsigned char *)(s1 + i)) != *((unsigned char *)(s2 + i)))
				return (*((unsigned char *)(s1 + i))
				- *((unsigned char *)(s2 + i)));
			i++;
		}
	}
	return (0);
}
