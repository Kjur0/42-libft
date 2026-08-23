/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 05:01:35 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:02:31 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## floating point math

/** @brief round down
 * 
 * @param n number to round down
 * @return rounded down value of `n`
 */
double	ft_floor(double n)
{
	long long int	integer_part;

	integer_part = n;
	return (integer_part);
}
