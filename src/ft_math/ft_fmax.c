/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:41:37 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:00:16 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## floating point math

/** @brief maximum value
 * 
 * @param a first number
 * @param b second number
 * @return maximum value of a and b
 */
double	ft_fmax(double a, double b)
{
	if (a > b)
		return (a);
	return (b);
}
