/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:28:21 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 17:52:24 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 1
//## char checks

/** @brief check for an alphanumeric character
 *
 * equivilent to:
 * ```c
 * ft_isalpha(c) || ft_isdigit(c)
 * ```
 *
 * @param c character to check
 * @retval 0 `false`
 * @retval 1 `true`
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
