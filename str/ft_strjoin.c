/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:29:30 by tlakchai          #+#    #+#             */
/*   Updated: 2023/11/28 05:05:56 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_string	ft_strjoin(const t_string s1, const t_string s2)
{
	size_t		i;
	size_t		x;
	t_string	result;

	if (!s1 || !s2)
		return (NULL);
	result = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i] != '\0')
		result[i++] = s1[x++];
	x = 0;
	while (s2[x] != '\0')
		result[i++] = s2[x++];
	result[i] = 0;
	return (result);
}
