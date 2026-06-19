/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:20:41 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 16:42:42 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## string manipulation

/** @brief locate character in a string
 *
 * first occurrence
 *
 * @note inputs are treated as `unsigned char`
 *
 * @param s string
 * @param c char to locate
 * @return pointer to first occurrence
 * @retval 0 character not found
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
