/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:10:30 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:11:00 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//## char manipulation

/** @brief convert character to lowercase
 *
 * @note inputs are treated as `unsigned char` (except for `-1`)
 *
 * @param c	uppercase character
 * @return	lowercase character
 */
char	ft_tolower(char c)
{
	const unsigned char	ch = c;

	if (c == -1)
		return (c);
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	if (c > ch)
		return (c);
	return (ch);
}
