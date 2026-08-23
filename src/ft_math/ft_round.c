/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 05:03:43 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:04:02 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## floating point math

/** @brief round to nearest integer
 *
 * @param n number to round
 * @return rounded value of `n`
 */
double	ft_round(double n)
{
	long long int	integer_part;

	integer_part = n;
	if (n == (double)integer_part)
		return (n);
	if (n > 0)
	{
		if ((n - integer_part) >= 0.5)
			return (integer_part + 1);
	}
	else
	{
		if ((integer_part - n) >= 0.5)
			return (integer_part - 1);
	}
	return (integer_part);
}
