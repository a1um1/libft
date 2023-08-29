/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml <ml@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:45:03 by ml                #+#    #+#             */
/*   Updated: 2023/08/26 22:23:24 by ml               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	do_count(char const *s, char c)
{
	int	count;

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

static void	do_split(char **result, char const *s, char c)
{
	int		x;
	int		i;

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
			s += i;
		}
	}
	result[x] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((do_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	do_split(result, s, c);
	return (result);
}
