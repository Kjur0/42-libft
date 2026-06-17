/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:47:53 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/17 10:30:31 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** \brief fill memory area with zero
 *
 * \param s pointer to memory area
 * \param n number of bytes to zero
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
