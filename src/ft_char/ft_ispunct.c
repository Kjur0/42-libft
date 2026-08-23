/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 02:30:15 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:10:46 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_char.h>
//## char classification

/** @brief check for punctaation
 * 
 * @param c	character to check
 */
bool	ft_ispunct(char c)
{
	return (('!' <= c && c <= '/') || (':' <= c && c <= '@')
		|| ('[' <= c && c <= '`') || ('{' <= c && c <= '~'));
}
