/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 02:33:40 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:10:46 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_char.h>
//## char classification

/** @brief check for whitespace character
 *
 * These are ` `, `\f`, `\n`, `\r`, `\t` and `\v`
 *
 * @param c	character to check
 */
bool	ft_isspace(char c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}
