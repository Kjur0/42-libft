/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:41:46 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:00:19 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>
//## integer math

/** @brief minimum value
 * 
 * @param a first number
 * @param b second number
 * @return minimum value of `a` and `b`
 */
int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
