/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:08:52 by tlakchai          #+#    #+#             */
/*   Updated: 2023/08/25 19:12:41 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	while (i < n)
	{
		((unsigned char *) s)[i] = 0;
		i++;
	}
}

int main(void)
{
	ft_bzero(NULL, 10);

}
