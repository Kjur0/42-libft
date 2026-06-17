/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:21:22 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/17 10:30:00 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
