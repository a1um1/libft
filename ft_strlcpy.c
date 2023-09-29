/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:39:10 by tlakchai          #+#    #+#             */
/*   Updated: 2023/09/29 20:11:30 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_size;

	src_size = ft_strlen(src);
	if (dstsize < 1)
		return (src_size);
	i = 0;
	while (i < dstsize - 1 && src[i] != NULL)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (src_size);
}
