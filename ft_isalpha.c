/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 02:53:32 by tyeo              #+#    #+#             */
/*   Updated: 2021/08/11 05:20:42 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
		return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalpha(75));
	return (0);
}
*/