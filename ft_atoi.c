/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:25:06 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/17 11:36:08 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** \brief checks for whitespace character
 *
 * These are ` `, `\f`, `\n`, `\r`, `\t` and `\v`
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

/** \brief convert a string to a number
 *
 * \warning errors are not detected
 *
 * \param nptr string
 * \return number
 */
int	ft_atoi(const char *nptr)
{
	size_t			i;
	unsigned int	n;
	signed int		sign;

	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	sign = 1;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	n = 0;
	while (ft_isdigit(nptr[i]))
		n = 10 * n - (nptr[i++] - '0');
	return (sign * n);
}
