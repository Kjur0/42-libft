/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 02:22:53 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/02 17:27:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_char.h>
//## char classification

/** @brief check for a control character
 *
 * @param c	character to check
*/
bool	ft_iscntrl(char c)
{
	return ((0x00 <= c && c <= 0x1F) || c == 0x7F);
}
