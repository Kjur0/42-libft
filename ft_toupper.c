/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:09:23 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 19:19:41 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** \brief convert character to uppercase
 *
 * \warning inputs are treated as `unsigned char` (except for `-1`)
 *
 * \param c lowercase character
 * \return uppercase character
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
