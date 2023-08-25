/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:39:10 by tlakchai          #+#    #+#             */
/*   Updated: 2023/08/25 15:50:20 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;
	size_t	src_size;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dst_size >= dstsize)
		return (dstsize + src_size);
	i = 0;
	j = dst_size;
	while (j < dstsize - 1 && src[i])
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	return (dst_size + src_size);
}
