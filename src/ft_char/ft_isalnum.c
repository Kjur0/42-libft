/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:28:21 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:11:00 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_char.h>
//## char classification

/** @brief check for an alphanumeric character
 *
 * equivalent to:
 * ```c
 * ft_isalpha(c) || ft_isdigit(c)
 * ```
 *
 * @param c	character to check
 */
bool	ft_isalnum(char c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
