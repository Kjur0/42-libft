/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:09:23 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:37:34 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_char.h>
//## char manipulation

/** @brief convert character to uppercase
 *
 * @param c	lowercase character
 * @return	uppercase character
 */
char	ft_toupper(char c)
{
	if (c == -1)
		return (c);
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}
