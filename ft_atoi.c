/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:25:06 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/01 20:33:59 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# Part 1
//## string convertion

/** @brief checks for whitespace character
 *
 * These are ` `, `\f`, `\n`, `\r`, `\t` and `\v`
 *
 * @internal helper for ft_atoi()
 * @param c		character to check
 * @retval 0	`false`
 * @retval 1	`true`
 */
static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

/** @brief convert a string to a number
 *
 * @warning errors are not detected
 *
 * @param nptr	string
 * @return		number
 */
int	ft_atoi(const char *nptr)
{
	unsigned long long	n;
	signed int			sign;

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
