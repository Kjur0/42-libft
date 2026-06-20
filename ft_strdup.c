/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:47:29 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/20 20:13:04 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## string manipulation

// import `malloc`
#include <stdlib.h>

/** @brief duplicate a string
 *
 * @param s string to duplicate
 * @return duplicated string
 */
char	*ft_strdup(const char *s)
{
	char			*str;
	size_t			i;
	const size_t	len = ft_strlen(s) + 1;

	if (!s)
		return (0);
	i = 0;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
