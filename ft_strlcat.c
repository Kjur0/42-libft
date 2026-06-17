/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:58:06 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/17 10:29:10 by kjurkows         ###   ########.fr       */
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
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size - 1 && dst[i])
		i++;
	j = 0;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (i);
}
