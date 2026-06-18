/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:21:22 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 20:49:06 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## string manipulation

/** \brief compare two strings
 *
 * compares only first non-matching character.
 * operates on ASCII codes
 *
 * \param s1	first string
 * \param s2	second string
 * \param n		max length for comparison
 * \return difference between first unmatched chars
 * \retval 0 no difference
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1 = (const unsigned char*)s1;
	const unsigned char	*str2 = (const unsigned char*)s2;
	size_t				i;

	i = 0;
	while (str1[i] && str1[i] == str2[i] && i + 1 < n)
		i++;
	return (str1[i] - str2[i]);
}
