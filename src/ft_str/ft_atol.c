/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:25:06 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/24 16:15:36 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>
//## numeric convertion

#include <ft_char.h>

/** @brief convert a string to a number
 *
 * @warning errors are not detected
 *
 * @param nptr	string
 * @return		number
 */
long	ft_atol(const char *nptr)
{
	unsigned long long	n;
	signed long			sign;

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
		if (n > 9223372036854775807ULL && sign == 1)
			return (-1);
		if (n > 9223372036854775808ULL && sign == -1)
			return (0);
	}
	return (sign * n);
}
