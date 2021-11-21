/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeo <tyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 04:23:03 by tyeo              #+#    #+#             */
/*   Updated: 2021/08/18 19:38:02 by tyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static void	ft_setstr(char const *s, char c, size_t count, char **str)
{
	size_t	length;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < count)
	{
		length = 0;
		while (s[i] == c)
			i++;
		while (s[i + length] != c && s[i + length])
			length++;
		str[j] = malloc(sizeof(*s) * length + 1);
		ft_strlcpy(str[j++], s + i, length + 1);
		i += length + 1;
	}
	str[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	wordcount;

	if (!s)
		return (0);
	wordcount = ft_count(s, c);
	result = malloc(sizeof(s) * (wordcount + 1));
	if (!result)
		return (0);
	ft_setstr(s, c, wordcount, result);
	return (result);
}

/*
int	main()
{
	char **a = ft_split("abcd efgh", ' ');
	size_t	i = 0;
	while (i < ft_count("abcd efgh", ' '))
	{
		printf("%s\n", a[i]);
		i++;
	}
	return (0);
}
*/