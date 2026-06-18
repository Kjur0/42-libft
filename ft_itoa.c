/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 20:51:09 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 22:08:36 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 2
//## string creation

//import `malloc`
#include <stdlib.h>

/** \brief count number of digits in a number
 *
 * \param n number
 * \return number of digits
 */
static size_t	count_digits(int n)
{
	size_t	res;

	res = 0;
	if (n < 0)
	{
		n = -(n + 1);
		res++;
	}
	if (n == 0)
		return (res + 1);
	while (n > 0)
	{
		res++;
		n /= 10;
	}
	return (res);
}

/**
 * \brief converts number to string
 *
 * \param n number to be converted
 * \return string representing the number
 * \retval 0 convertion failed
 */
char	*ft_itoa(int n)
{
	size_t		len;
	char		*out;
	const int	sign = n < 0;

	len = count_digits(n);
	out = malloc(len + 1);
	if (!out)
		return (0);
	out[len--] = 0;
	while (len - sign + 1 > 0)
	{
		if (n > 0)
			out[len--] = '0' + n % 10;
		else
			out[len--] = '0' - n % 10;
		n /= 10;
	}
	if (sign)
		out[len] = '-';
	return (out);
}
