/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 19:37:58 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 16:36:55 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 2
//## string creation

//import `malloc`
#include <stdlib.h>

/** @brief checks if string contains a char
 *
 * @param str	string
 * @param c		character
 * @retval 0 `false`
 * @retval 1 `true`
 */
static int	ft_strcontains(const char *str, const char c)
{
	size_t	i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (1);
	return (0);
}

/** @brief trim a string
 *
 * @param s1	string to trim
 * @param set	set of characters to be removed
 * @return new trimmed string
 * @retval 0 trimming failed
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;

	while (*s1 && ft_strcontains(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len + 1 > 0 && ft_strcontains(set, s1[len - 1]))
		len--;
	str = malloc(len + 1);
	if (str)
		ft_strlcpy(str, s1, len + 1);
	return (str);
}
