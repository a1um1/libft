/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml <ml@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:11:48 by tlakchai          #+#    #+#             */
/*   Updated: 2023/08/30 11:28:57 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (dst < src)
	{
		while (i < n)
		{
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	else
		while (n-- > 0)
			((unsigned char *) dst)[n] = ((unsigned char *) src)[n];
	return (dst);
}
