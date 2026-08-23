/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:10:07 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:10:22 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_char.h>
//# char classification

/** @brief check for a hexadecimal digit
 *
 * @param c	character to check
 */
bool	ft_isxdigit(char c)
{
	return (ft_isdigit(c) || ('A' <= c && c <= 'F') || ('a' <= c && c <= 'f'));
}