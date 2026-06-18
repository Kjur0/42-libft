/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:10:30 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 19:12:04 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** \brief convert character to lowercase
 *
 * \param c uppercase character
 * \return lowercase character
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
