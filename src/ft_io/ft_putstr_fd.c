/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:17:29 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:10:54 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_io.h>
//## I/O

#include <ft_str.h>

//import `write`
#include <unistd.h>

/** @brief write a string
 *
 * @param s		string to write
 * @param fd	file descriptor for output
 */
void	ft_putstr_fd(const char *s, int fd)
{
	const size_t	len = ft_strlen(s);

	if (fd < 1 || !s)
		return ;
	write(fd, s, len);
}
