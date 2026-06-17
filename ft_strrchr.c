/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:24:49 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/17 10:29:45 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** \brief locate character in a string (reverse)
 *
 * last occurrence
 *
 * \warning multibyte chars are unsupported
 *
 * \param s string
 * \param c char to locate
 * \return pointer to last occurrence
 * \retval 0 character not found
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	value;

	i = 1;
	value = c;
	while (s[i - 1])
		i++;
	while (i > 0)
	{
		if (s[i - 1] == value)
			return ((char *)s + i - 1);
		i--;
	}
	return (0);
}
