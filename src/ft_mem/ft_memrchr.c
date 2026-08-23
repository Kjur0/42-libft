/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:45:24 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:10:46 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_mem.h>
//## memory manipulation

/** @brief scan memory for a byte (reverse)
 *
 * last occurrence
 *
 * @param s		pointer to memory area
 * @param c		byte to search for
 * @param n		size of memory area
 * @return		pointer to first occurrence
 * @retval 0	byte not found
*/
void	*ft_memchr(const void *s, t_byte c, size_t n)
{
	const t_byte	*ptr = s;
	size_t			i;

	if (!s)
		return (NULL);
	i = n;
	while (i > 0)
	{
		if (ptr[i - 1] == c)
			return ((unsigned char *)ptr + i - 1);
		i--;
	}
	return (NULL);
}
