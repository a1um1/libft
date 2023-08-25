/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:37:53 by tlakchai          #+#    #+#             */
/*   Updated: 2023/08/25 18:47:05 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	c;

	c = ft_strlen(s1);
	result = malloc(sizeof(char) * c + 1);
	if (!result)
		return (NULL);
	c = 0;
	while (s1[c])
	{
		result[c] = s1[c];
		c++;
	}
	result[c] = 0;
	return (result);
}
