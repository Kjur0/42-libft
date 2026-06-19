/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:10:30 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 16:41:33 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## char manipulation

/** @brief convert character to lowercase
 *
 * @note inputs are treated as `unsigned char` (except for `-1`)
 *
 * @param c uppercase character
 * @return lowercase character
 */
int	ft_tolower(int c)
{
	unsigned char	ch;

	if (c == -1)
		return (c);
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	ch = c;
	if (c > ch)
		return (c);
	return (ch);
}
