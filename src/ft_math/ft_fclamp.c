/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fclamp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:41:59 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:00:14 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## floating point math

/** @brief clamped value
 * 
 * ensure that `n` is between `min` and `max`
 * 
 * @param n number to clamp
 * @param min minimum value
 * @param max maximum value
 * @return clamped value of `n`
 */
double	ft_fclamp(double n, double min, double max)
{
	if (n < min)
		return (min);
	if (n > max)
		return (max);
	return (n);
}
