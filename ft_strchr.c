/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:20:41 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/25 17:41:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# Part 1
//## string manipulation

/** @brief locate character in a string
 *
 * first occurrence
 *
 * @note inputs are treated as `unsigned char`
 *
 * @param s		string
 * @param c		char to locate
 * @return		pointer to first occurrence
 * @retval 0	character not found
*/
char	*ft_strchr(const char *s, int c)
{
	const char	ch = c;

	if (!s)
		return (0);
	while (*s != ch)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
