/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:29:30 by tlakchai          #+#    #+#             */
/*   Updated: 2023/09/29 20:11:11 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	result = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (*s1 != NULL)
		*result++ = *s1++;
	while (*s2 != NULL)
		*result++ = *s2++;
	*result = 0;
	return (result - (s1_size + s2_size));
}
