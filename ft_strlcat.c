/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:58:06 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 16:13:19 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** \brief safely concatenate two strings
 *
 * concatenate two string to a string of specified length
 * ensuring the result is `NUL`-terminated and doesn't exceed size limit
 *
 * \param dst	pointer to destination
 * \param src	pointer to source
 * \param size	max size of the result
 * \return total length of result string
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t	src_len = ft_strlen(src);
	const size_t	dst_len = ft_strlen(dst);
	size_t			append;
	size_t			i;

	if (size < dst_len + 1)
		return (src_len + size);
	append = size - dst_len - 1;
	i = 0;
	while (i < append && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
