/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:36:26 by tlakchai          #+#    #+#             */
/*   Updated: 2023/10/21 09:05:33 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const t_string s, int c)
{
	size_t	i;
	char	*ss;
	char	cc;

	i = 0;
	ss = (char *) s;
	cc = (char) c;
	while (ss[i])
	{
		if (ss[i] == cc)
			return (ss + i);
		i++;
	}
	if (ss[i] == cc)
		return (ss + i);
	return (NULL);
}
