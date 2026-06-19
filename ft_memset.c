/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:43:16 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 16:36:27 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## memory manipulation

/** @brief fill memory area with constant byte
 *
 * @param s pointer to memory area
 * @param c constant byte for filling
 * @param n number of bytes to fill
 * @return pointer to filled memory (`s`)
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	byte;
	size_t			i;

	i = 0;
	byte = c;
	ptr = s;
	while (i < n)
	{
		ptr[i++] = byte;
	}
	return (ptr);
}
