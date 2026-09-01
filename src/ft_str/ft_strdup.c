/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:47:29 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:37:55 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>
//## string manipulation

// import `malloc`
#include <malloc.h>

/** @brief duplicate a string
 *
 * @param s			string to duplicate
 * @return			duplicated string
 * @retval `NULL`	duplication failed
 */
char	*ft_strdup(const char *s)
{
	char			*str;
	size_t			i;
	const size_t	len = ft_strlen(s) + 1;

	if (!s)
		return (NULL);
	i = 0;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
