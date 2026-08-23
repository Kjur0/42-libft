/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:24:49 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:11:00 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>
//## string examination

/** @brief locate character in a string (reverse)
 *
 * last occurrence
 *
 * @note inputs are treated as `unsigned char`
 *
 * @param s		string
 * @param c		char to locate
 * @return		pointer to last occurrence
 * @retval 0	character not found
 */
char	*ft_strrchr(const char *s, char c)
{
	size_t		i;

	if (!s)
		return (NULL);
	i = 1;
	while (s[i - 1])
		i++;
	while (i > 0)
	{
		if (s[i - 1] == c)
			return ((char *)s + i - 1);
		i--;
	}
	return (NULL);
}
