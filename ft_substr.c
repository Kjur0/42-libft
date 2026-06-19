/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:19:40 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 16:36:55 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 2
//## string creation

//import `malloc`
#include <stdlib.h>

/** @brief create a substring from a string
 *
 * @param s		original string
 * @param start	starting index of the substring
 * @param len	max length of a the substring
 * @return created substring
 * @retval 0 creation failed
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*str;

	size = ft_strlen((char *)s);
	if (start >= size)
		size = start;
	size -= start;
	if (size > len)
		size = len;
	str = malloc(sizeof(char) * (size + 1));
	if (str)
	{
		i = 0;
		while (i < size)
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = 0;
	}
	return (str);
}
