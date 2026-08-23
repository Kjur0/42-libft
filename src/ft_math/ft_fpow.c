/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fpow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:42:14 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:00:17 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## floating point math

/** @brief power function
 * 
 * @param base base number
 * @param exp exponent
 * @return `base` raised to the power of `exp`
 */
double	ft_fpow(double base, int exp)
{
	double	result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	while (exp < 0)
	{
		result /= base;
		exp++;
	}
	return (result);
}
