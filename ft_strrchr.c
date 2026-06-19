/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:24:49 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 16:42:42 by kjurkows         ###   ########.fr       */
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
 * @param s string
 * @param c char to locate
 * @return pointer to last occurrence
 * @retval 0 character not found
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
