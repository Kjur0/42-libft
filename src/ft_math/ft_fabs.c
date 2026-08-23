/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:40:42 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:00:14 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## floating point math

/** @brief absolute value
 * 
 * @param n number to get absolute value of
 * @return absolute value of `n`
 */
double	ft_fabs(double n)
{
	if (n < 0)
		return (-n);
	return (n);
}
