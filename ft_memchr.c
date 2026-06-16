/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:45:24 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 17:55:04 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = s;
	unsigned char		byte;
	size_t				i;

	byte = c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == byte)
			return ((unsigned char *)ptr + i);
		i++;
	}
	return (0);
}
