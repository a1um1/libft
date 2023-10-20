/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:15:39 by tlakchai          #+#    #+#             */
/*   Updated: 2023/08/31 11:04:45 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

const char	*do_find_mulp(const char *str, int *mulp, unsigned long	*cutoff)
{
	*mulp = 1;
	*cutoff = LONG_MAX;
	while (is_space(*str))
		(str)++;
	if (*str == '+' || *str == '-')
		*mulp = 1 - 2 * (*(str)++ == '-');
	if (*mulp == -1)
		*cutoff = (unsigned long) LONG_MAX + 1;
	return (str);
}

int	ft_atoi(const char *str)
{
	unsigned long	re;
	int				mulp;
	unsigned long	cutoff;
	int				cutlim;
	char			*sstr;

	re = 0;
	sstr = (char *) do_find_mulp(str, &mulp, &cutoff);
	cutlim = cutoff % 10;
	cutoff /= 10;
	while (*sstr >= '0' && *sstr <= '9')
	{
		if (re > cutoff || (re == cutoff && (*sstr - '0') > cutlim))
		{
			if (mulp == 1)
				return ((int) LONG_MAX);
			else
				return ((int) LONG_MIN);
		}
		re = (re * 10) + (*(sstr++) - '0');
	}
	return ((int) re * mulp);
}
