/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:14:58 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 21:16:04 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 2
//## writing

//import `write`
#include <unistd.h>

/** \brief write a character
 *
 * \param c		character to write
 * \param fd	file descriptor for writing
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
