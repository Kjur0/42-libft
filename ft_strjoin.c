/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 19:25:04 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/21 14:01:02 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 2
//## string creation

//import `malloc`
#include <stdlib.h>

/** @brief join two strings into a new one
 *
 * @param s1	first string
 * @param s2	second string
 * @return		new string
 * @retval 0	joining failed
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	const size_t	len1 = ft_strlen(s1);
	const size_t	len2 = ft_strlen(s2);
	char			*str;
	size_t			i;
	size_t			j;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (str);
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
		str[i++] = s2[j++];
	str[i] = 0;
	return (str);
}
