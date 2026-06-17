/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:20:41 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/17 10:29:37 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** \brief locate character in a string
 *
 * first occurrence
 *
 * \warning multibyte chars are unsupported
 *
 * \param s string
 * \param c char to locate
 * \return pointer to first occurrence
 * \retval 0 character not found
*/
char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	wanted;

	i = 0;
	wanted = c;
	while (s[i] != wanted)
	{
		if (!s[i])
			return (0);
		i++;
	}
	return ((char *)s + i);
}
