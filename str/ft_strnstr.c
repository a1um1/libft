/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 17:05:14 by tlakchai          #+#    #+#             */
/*   Updated: 2023/12/29 04:46:22 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const t_string haystack, const t_string needle, size_t len)
{
	size_t		i;
	size_t		count;

	if (len == 0 && haystack == NULL)
		return (NULL);
	count = ft_strlen(needle);
	i = 0;
	if (!count)
		return ((char *) haystack);
	while (haystack[i] && i + count <= len)
	{
		if (ft_strncmp(haystack + i, needle, count) == 0)
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
