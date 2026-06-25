/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:07:11 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/25 17:41:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# Part 1
//## memory manipulation

/** @brief copy memory area
 *
 * @warning `src` and `dest` must not overlap
 *
 * @param dest	pointer to destination
 * @param src	pointer to source
 * @param n		number of bytes to copy (length)
 * @return		pointer to destination
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_writeable;
	const unsigned char	*src_readable = src;

	if (!dest)
		return (0);
	if (!src)
		return (dest);
	if ((src <= dest && src + n > dest) || (dest <= src && dest + n > src))
		return (dest);
	i = 0;
	dest_writeable = dest;
	while (i < n)
	{
		dest_writeable[i] = src_readable[i];
		i++;
	}
	return (dest_writeable);
}
