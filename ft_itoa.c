/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:56:41 by tlakchai          #+#    #+#             */
/*   Updated: 2023/08/28 15:10:17 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_str(long n)
{
	int	size;

	size = 0;
	while (n > 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nn;
	int		s_size;
	char	*result;
	int		is_neg;

	nn = (long) n;
	is_neg = 0;
	if (nn < 0)
	{
		is_neg = 1;
		nn = -nn;
	}
	s_size = len_of_str(nn) + is_neg + 1;
	result = malloc(s_size + 1 * sizeof(char));
	if (!result)
		return (NULL);
	result[--s_size] = '\0';
	while (s_size--)
	{
		result[s_size] = ((nn % 10) + '0');
		nn /= 10;
	}
	if (is_neg)
		result[0] = '-';
	return (result);
}

int main()
{

	printf("%s\n", ft_itoa(INT32_MAX));
}
