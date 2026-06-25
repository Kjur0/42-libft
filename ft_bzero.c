/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:47:53 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/25 17:41:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# Part 1
//## memory manipulation

/** @brief fill memory area with zero
 *
 * @param s	pointer to memory area
 * @param n	number of bytes to zero
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char		*ptr;
	size_t				i;

	if (!s)
		return ;
	i = 0;
	ptr = s;
	while (i < n)
		ptr[i++] = 0;
}
