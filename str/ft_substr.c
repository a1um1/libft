/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:30:05 by tlakchai          #+#    #+#             */
/*   Updated: 2024/01/01 04:31:20 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	if (!s)
		return (NULL);
	while (start > 0 && *s)
	{
		s++;
		start--;
	}
	if (ft_strlen(s) > len)
		result = malloc((len + 1) * sizeof(char));
	else
		result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}
