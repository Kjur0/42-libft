/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:23:13 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 14:08:38 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/** \brief checks for an alphabetic character
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
int				ft_isalpha(int c);
/** \brief checks for a digit
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
int				ft_isdigit(int c);
/** \brief checks for an alphanumeric character
 *
 * equivilent to:
 * ```c
 * ft_isalpha(c) || ft_isdigit(c)
 * ```
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
int				ft_isalnum(int c);
/** \brief checks is the character in ASCII range
 *
 * checks if value is between `0` and `127` (7-bit unsigned integer)
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
int				ft_isascii(int c);
/** \brief checks is the character printable (non-control)
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
int				ft_isprint(int c);

#endif
