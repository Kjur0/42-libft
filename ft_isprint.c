/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:35:51 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 19:37:06 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# Part 1
//## char checks

/** \brief checks is the character printable (non-control)
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
