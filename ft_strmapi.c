/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:06:35 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/20 20:16:06 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 2
//## string creation

//import `malloc`
#include <stdlib.h>

/** @brief map a string
 *
 * @param s string to map
 * @param f function used for mapping
 * @return new string
 * @retval 0 mapping failed
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	const size_t	len = ft_strlen(s);
	size_t			i;
	char			*str;

	if (!s || !f)
		return (0);
	str = malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
