/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:42:14 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:00:19 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## integer math

/** @brief power function
 * 
 * @param base base number
 * @param exp exponent
 * @return `base` raised to the power of `exp`
 */
int	ft_pow(int base, int exp)
{
	int	result;

	if (exp < 0)
		return (0);
	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}
