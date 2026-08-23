/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:41:37 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:00:18 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## integer math

/** @brief maximum value
 * 
 * @param a first number
 * @param b second number
 * @return maximum value of `a` and `b`
 */
int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
