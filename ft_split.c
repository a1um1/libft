/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:29:12 by tlakchai          #+#    #+#             */
/*   Updated: 2023/09/29 20:10:13 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	do_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != NULL)
	{
		while (*s == c && *s != NULL)
			s++;
		if (*s)
			count++;
		while (*s != c && *s != NULL)
			s++;
	}
	return (count);
}

static char	**do_clean(char **result, size_t cur)
{
	size_t	i;

	i = 0;
	while (i < cur)
		free(result[i++]);
	free(result);
	return (NULL);
}

static char	**do_split(char **result, char const *s, char c)
{
	size_t	x;
	size_t	i;

	i = 0;
	x = 0;
	while (*s != NULL)
	{
		while (*s == c && *s)
			s++;
		if (*s != NULL)
		{
			if (ft_strchr(s, c) == NULL)
				i = ft_strlen(s);
			else
				i = ft_strchr(s, c) - s;
			result[x] = ft_substr(s, 0, i);
			if (!result[x])
				return (do_clean(result, x));
			x++;
			s += i;
		}
	}
	result[x] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = malloc((do_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (do_split(result, s, c));
}
