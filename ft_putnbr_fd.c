/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:13:30 by tlakchai          #+#    #+#             */
/*   Updated: 2023/09/29 19:51:06 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	pnbr_put(long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		pnbr_put(n / 10, fd);
	pnbr_pu((n % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	pnbr_put((long) n, fd);
}
