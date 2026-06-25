/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:17:29 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/25 17:41:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# Part 2
//## writing

//import `write`
#include <unistd.h>

/** @brief write a string ending with new line
 *
 * @param s		string to write
 * @param fd	file descriptor for writing
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 1 || !s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
