/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:43:16 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:11:00 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_mem.h>
//## memory manipulation

/** @brief fill memory area with constant byte
 *
 * @param s	pointer to memory area
 * @param c	constant byte for filling
 * @param n	number of bytes to fill
 * @return	pointer to filled memory (`s`)
 */
void	*ft_memset(void *s, t_byte c, size_t n)
{
	t_byte			*ptr;
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	ptr = s;
	while (i < n)
		ptr[i++] = c;
	return (ptr);
}
