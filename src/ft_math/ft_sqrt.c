/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:42:46 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:00:21 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## integer math

/** @brief square root function
 * 
 * @param n number to get square root of
 * @return square root of `n`
 * @retval -1 `n` is negative or not a perfect square
 */
int	ft_sqrt(int n)
{
	int	i;

	if (n < 0)
		return (-1);
	i = 0;
	while (i * i < n)
		i++;
	if (i * i == n)
		return (i);
	return (-1);
}
