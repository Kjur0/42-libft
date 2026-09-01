/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:25:06 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:36:53 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>
//## numeric convertion

#include <ft_char.h>

/** @brief convert a string to a number (`int`)
 *
 * @warning errors are not detected
 *
 * @param nptr	string
 * @return		number
 */
int	ft_atoi(const char *nptr)
{
	unsigned int	n;
	signed int		sign;

	if (!nptr)
		return (0);
	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	n = 0;
	while (ft_isdigit(*nptr))
	{
		n = 10 * n + (*nptr++ - '0');
	}
	return (sign * n);
}
