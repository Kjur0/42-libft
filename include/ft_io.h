/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 03:32:22 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:23:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

# include <ft_printf.h>

//## I/O

# define FD_STDIN	0
# define FD_STDOUT	1
# define FD_STDERR	2

/** @brief write a character
 *
 * @param c		character to write
 * @param fd	file descriptor for output
 */
void	ft_putchar_fd(char c, int fd);

/** @brief write a string
 *
 * @param s		string to write
 * @param fd	file descriptor for output
 */
void	ft_putstr_fd(const char *s, int fd);
/** @brief write a string ending with new line
 *
 * @param s		string to write
 * @param fd	file descriptor for output
 */
void	ft_putendl_fd(const char *s, int fd);

/** @brief write a number
 *
 * @param n		number to write
 * @param fd	file descriptor for output
 */
void	ft_putnbr_fd(int n, int fd);

#endif