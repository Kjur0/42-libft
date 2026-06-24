/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:55:08 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/23 22:05:53 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## string manipulation

/** @brief safely copy a string
 *
 * copy up to specified amount of characters from `NUL`-terminated string
 * ensuring the result is `NUL`-terminated and doesn't exceed size limit
 *
 * @param dst	pointer to destination
 * @param src	pointer to source
 * @param size	max size of the result
 * @return		`ft_strlen(src) + min(size, ft_strlen(dst))`
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const size_t	src_len = ft_strlen(src);
	size_t			i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = 0;
	return (src_len);
}
