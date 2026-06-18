/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:13:36 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 20:49:06 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## memory manipulation

/** \brief move memory area
 *
 * \warning `src` and `dest` may overlap, but `src` might be overridden
 *
 * \param dest	pointer to destination
 * \param src	pointer to source
 * \param n		number of bytes to move (length)
 * \return pointer to destination
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_writeable;
	const unsigned char	*src_readable = src;

	dest_writeable = dest;
	if (n == 0 || dest_writeable == src_readable)
		return (dest_writeable);
	if (src_readable < dest_writeable)
	{
		while (n > 0)
		{
			dest_writeable[n - 1] = src_readable[n - 1];
			n--;
		}
		return (dest_writeable);
	}
	i = 0;
	while (i < n)
	{
		dest_writeable[i] = src_readable[i];
		i++;
	}
	return (dest_writeable);
}
