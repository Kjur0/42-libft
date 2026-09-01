/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:20:41 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:23:43 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>
//## string examination

/** @brief locate character in a string
 *
 * first occurrence
 *
 * @param s			string
 * @param c			char to locate
 * @return			pointer to first occurrence
 * @retval `NULL`	character not found
*/
char	*ft_strchr(const char *s, char c)
{
	if (!s)
		return (NULL);
	while (*s != c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
