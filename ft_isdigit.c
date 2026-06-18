/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:26:59 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 20:49:06 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## char checks

/** \brief checks for a digit
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
