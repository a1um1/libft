/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:29:30 by tlakchai          #+#    #+#             */
/*   Updated: 2023/10/21 14:19:01 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_string	ft_strjoin(const t_string s1, const t_string s2)
{
	size_t		s1_size;
	size_t		s2_size;
	t_string	ps1;
	t_string	ps2;
	t_string	result;

	if (!s1 || !s2)
		return (NULL);
	ps1 = s1;
	ps2 = s2;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	result = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (*s1)
		*(result++) = *(ps1++);
	while (*s2)
		*(result++) = *(ps2++);
	*result = 0;
	return (result - (s1_size + s2_size));
}
