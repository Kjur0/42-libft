/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:17:29 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/20 20:10:41 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 2
//## writing

//import `write`
#include <unistd.h>

/** @brief write a string
 *
 * @param s		string to write
 * @param fd	file descriptor for writing
 */
void	ft_putstr_fd(char *s, int fd)
{
	const size_t	len = ft_strlen(s);

	if (fd < 1 || !s)
		return ;
	write(fd, s, len);
}
