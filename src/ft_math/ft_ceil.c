/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceil.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:59:04 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:03:38 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## floating point math

/** @brief round up
 *
 * @param n number to round up
 * @return rounded up value of `n`
 */
double	ft_ceil(double n)
{
	long long int	integer_part;

	integer_part = n;
	if (n == (double)integer_part)
		return (n);
	return (integer_part + 1);
}
