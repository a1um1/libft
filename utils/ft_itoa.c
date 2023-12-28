/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:56:41 by tlakchai          #+#    #+#             */
/*   Updated: 2023/12/29 04:46:22 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	len_of_str(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	sign_of(char *s, int n)
{
	if (n < 0)
	{
		s[0] = '-';
		return (-1);
	}
	else if (n == 0)
		s[0] = '0';
	return (1);
}

char	*ft_itoa(int n)
{
	int		s_size;
	char	*result;
	int		m_sign;

	s_size = len_of_str(n);
	result = malloc(s_size + 1 * sizeof(char));
	if (!result)
		return (NULL);
	m_sign = sign_of(result, n);
	result[s_size] = '\0';
	while (n)
	{
		s_size--;
		result[s_size] = m_sign * (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
