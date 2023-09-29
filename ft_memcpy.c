/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:11:48 by tlakchai          #+#    #+#             */
/*   Updated: 2023/09/29 20:13:50 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ddst;
	unsigned char	*ssrc;

	if (dst == src)
		return (dst);
	i = 0;
	ddst = (unsigned char *) dst;
	ssrc = (unsigned char *) src;
	while (i < n)
	{
		ddst[i] = ssrc[i];
		i++;
	}
	return (dst);
}
