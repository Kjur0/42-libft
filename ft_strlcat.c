/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:58:06 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/23 22:57:45 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## string manipulation

/** @brief safely concatenate two strings
 *
 * concatenate two string to a string of specified length
 * ensuring the result is `NUL`-terminated and doesn't exceed size limit
 *
 * @param dst	pointer to destination
 * @param src	pointer to source
 * @param size	max size of the result
 * @return		`ft_strlen(src)`
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t	src_len = ft_strlen(src);
	size_t			dst_len;
	size_t			append;
	size_t			i;

	if (!dst)
		return (0);
	dst_len = 0;
	i = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (size <= dst_len)
		return (src_len + size);
	else if (!src)
		return (dst_len);
	append = size - dst_len - 1;
	i = 0;
	while (i < append && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
