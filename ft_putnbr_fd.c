/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:13:30 by tlakchai          #+#    #+#             */
/*   Updated: 2023/09/29 20:14:32 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	pnbr_put(long n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		pnbr_put(n / 10, fd);
	write(fd, (n % 10) + '0', 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	pnbr_put((long) n, fd);
}
