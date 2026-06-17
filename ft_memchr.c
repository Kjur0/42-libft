/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:45:24 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/17 10:30:54 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** \brief scan memory for a byte
 *
 * first occurrence
 *
 * \param s pointer to memory area
 * \param c byte to search for
 * \param n size of memory area
 * \return pointer to first occurrence
 * \retval 0 byte not found
*/
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
