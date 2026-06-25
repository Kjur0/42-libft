/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:01:31 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/25 17:41:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# Part 1
//## memory manipulation

/** @brief compare memory areas
 *
 * @param s1	first memory area
 * @param s2	second memory area
 * @param n		size to compare
 * @return		difference between first unmatched bytes
 * @retval 0	no difference
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*mem1 = s1;
	const unsigned char	*mem2 = s2;
	size_t				i;

	i = 0;
	if (!s1 && s2)
		return (-mem2[i]);
	if (!s2 && s1)
		return (mem1[i]);
	if (!s1 && !s2)
		return (0);
	while (i < n)
	{
		if (mem1[i] != mem2[i])
			return (mem1[i] - mem2[i]);
		i++;
	}
	return (0);
}
