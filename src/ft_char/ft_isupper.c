/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:35:51 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:10:46 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_char.h>
//## char classification

/** @brief check for a uppercase letter
 * 
 * @param c	character to check
 */
bool	ft_isupper(char c)
{
	return ('A' <= c && c <= 'Z');
}
