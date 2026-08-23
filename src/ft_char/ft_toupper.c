/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:09:23 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:11:00 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//## char manipulation

/** @brief convert character to uppercase
 *
 * @note inputs are treated as `unsigned char` (except for `-1`)
 *
 * @param c	lowercase character
 * @return	uppercase character
 */
char	ft_toupper(char c)
{
	const unsigned char	ch = c;

	if (c == -1)
		return (c);
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	if (c > ch)
		return (c);
	return (ch);
}
