/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:13:30 by tlakchai          #+#    #+#             */
/*   Updated: 2023/08/28 15:16:18 by tlakchai         ###   ########.fr       */
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

void	ft_putnbr_fd(int n, int fd)
{
	char	*r;
	long	nn;
	int		is_neg;

	r = ft_itoa(n);
	if (!r)
		return ;
	nn = (long) n;
	is_neg = 0;
	if (nn < 0)
	{
		is_neg = 1;
		nn = -nn;
	}
	write(fd, nn, len_of_str(nn) + is_neg + 1);
}
