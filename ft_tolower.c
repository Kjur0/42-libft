/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:10:30 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/17 10:28:41 by kjurkows         ###   ########.fr       */
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
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}
