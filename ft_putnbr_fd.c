/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:22:46 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 21:25:16 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 2
//## writing

//import `write`
#include <unistd.h>

/** \brief write a number
 *
 * \param n		number to write
 * \param fd	file descriptor for writing
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		if (n < -9)
			ft_putnbr_fd((-n) / 10, fd);
		c = '0' - n % 10;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (n >= 0)
		c = '0' + n % 10;
	write(fd, &c, 1);
}
