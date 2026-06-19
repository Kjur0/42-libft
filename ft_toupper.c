/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:09:23 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 16:41:34 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## char manipulation

/** @brief convert character to uppercase
 *
 * @note inputs are treated as `unsigned char` (except for `-1`)
 *
 * @param c lowercase character
 * @return uppercase character
 */
int	ft_toupper(int c)
{
	unsigned char	ch;

	if (c == -1)
		return (c);
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	ch = c;
	if (c > ch)
		return (c);
	return (ch);
}
