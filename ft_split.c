/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:29:12 by tlakchai          #+#    #+#             */
/*   Updated: 2023/08/30 11:34:16 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	do_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c && *s)
			s++;
		if (*s && *s != c)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	**do_clean(char **result, size_t cur)
{
	size_t	i;

	i = 0;
	while (i < cur)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static char	**do_split(char **result, char const *s, char c)
{
	size_t	x;
	size_t	i;

	i = 0;
	x = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				i = ft_strlen(s);
			else
				i = ft_strchr(s, c) - s;
			result[x++] = ft_substr(s, 0, i);
			if (!result[x - 1])
				return (do_clean(result, x));
			s += i;
		}
	}
	result[x] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((do_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (do_split(result, s, c));
}
