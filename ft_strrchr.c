/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:24:49 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/23 21:17:11 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## string manipulation

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
char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	ch = c;

	if (!s)
		return (0);
	i = 1;
	while (s[i - 1])
		i++;
	while (i > 0)
	{
		if (s[i - 1] == ch)
			return ((char *)s + i - 1);
		i--;
	}
	return (0);
}
