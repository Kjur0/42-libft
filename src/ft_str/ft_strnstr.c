/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:15:44 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:11:00 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>
//## string examination

/** @brief locate a substring in a string
 *
 * @param big		string to search in
 * @param little	string to search for
 * @param len		max length for searching
 * @return			pointer to substring
 * @retval 0		substring not located
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	i = 0;
	if (!little[i])
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && big[i + j] && big[i + j] == little[j]
			&& i + j < len)
			j++;
		if (!little[j])
			return ((char *)big + i);
		if (!big[i + j])
			return (NULL);
		i++;
	}
	return (NULL);
}
