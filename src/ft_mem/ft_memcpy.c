/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:07:11 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:11:00 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_mem.h>
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
	size_t			i;
	t_byte			*dest_writeable;
	const t_byte	*src_readable = src;

	if (!dest)
		return (NULL);
	if (!src)
		return (dest);
	if ((src <= dest && src + n > dest) || (dest <= src && dest + n > src))
		return (ft_memmove(dest, src, n));
	i = 0;
	dest_writeable = dest;
	while (i < n)
	{
		dest_writeable[i] = src_readable[i];
		i++;
	}
	return (dest_writeable);
}
