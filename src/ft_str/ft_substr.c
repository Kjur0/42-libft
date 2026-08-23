/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:19:40 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:10:54 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>
//## string manipulation

//import `malloc`
#include <malloc.h>

/** @brief create a substring from a string
 *
 * @param s		original string
 * @param start	starting index of the substring
 * @param len	max length of a the substring
 * @return		created substring
 * @retval 0	creation failed
 */
char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*str;

	if (!s)
		return (0);
	size = ft_strlen(s);
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
