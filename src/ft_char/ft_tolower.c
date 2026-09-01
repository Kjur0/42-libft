/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:10:30 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:37:28 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_char.h>
//## char manipulation

/** @brief convert character to lowercase
 *
 * @param c	uppercase character
 * @return	lowercase character
 */
char	ft_tolower(char c)
{
	if (c == -1)
		return (c);
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}
