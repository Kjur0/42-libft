/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:17:29 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:10:54 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_io.h>
//## I/O

//import `write`
#include <unistd.h>

/** @brief write a string ending with new line
 *
 * @param s		string to write
 * @param fd	file descriptor for output
 */
void	ft_putendl_fd(const char *s, int fd)
{
	if (fd < 1 || !s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
