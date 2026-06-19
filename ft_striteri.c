/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:11:43 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 18:29:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 2
//## string creation

/** @brief iterate over a string
 *
 * @param s string to iterate over
 * @param f function
 */
void	ft_striteri(char const *s, void (*f)(unsigned int, char))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, s[i]);
		i++;
	}
}
