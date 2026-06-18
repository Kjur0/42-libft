/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:15:44 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 19:36:32 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# Part 1
//## string manipulation

/** \brief locate a substring in a string
 *
 * \param big		string to search in
 * \param little	string to search for
 * \param len		max length for searching
 * \return pointer to substring
 * \retval 0 substring not located
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && big[i + j] && big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)big + i);
		if (!big[i + j])
			return (0);
		i++;
	}
	return (0);
}
