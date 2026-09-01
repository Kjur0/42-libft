/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 02:07:43 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:28:27 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHAR_H
# define FT_CHAR_H

# include <stdbool.h>

//## char classification

/** @brief check for an alphanumeric character
 *
 * equivalent to:
 * ```c
 * ft_isalpha(c) || ft_isdigit(c)
 * ```
 *
 * @param c	character to check
 */
bool	ft_isalnum(char c);
/** @brief check for an alphabetic character
 *
 * @param c	character to check
 */
bool	ft_isalpha(char c);
/** @brief check for a lowercase letter
 *
 * @param c	character to check
 */
bool	ft_islower(char c);
/** @brief check for an uppercase letter
 *
 * @param c	character to check
 */
bool	ft_isupper(char c);
/** @brief check for a digit
 *
 * @param c	character to check
 */
bool	ft_isdigit(char c);
/** @brief check for a hexadecimal digit
 *
 * @param c	character to check
 */
bool	ft_isxdigit(char c);
/** @brief check for a control character
 *
 *
 * @param c	character to check
*/
bool	ft_iscntrl(char c);
/** @brief check for a graphical symbol
 *
 * any printable character except `' '` (space)
 *
 * @param c	character to check
 */
bool	ft_isgraph(char c);
/** @brief check for whitespace character
 *
 * These are ` `, `\f`, `\n`, `\r`, `\t` and `\v`
 *
 * @param c	character to check
 */
bool	ft_isspace(char c);
/** @brief check for a blank character
 *
 * blank character is `' '` (space) or `'\t'` (tab)
 */
bool	ft_isblank(char c);
/** @brief check is the character printable (non-control)
 *
 * @param c	character to check
 */
bool	ft_isprint(char c);
/** @brief check for punctaation
 *
 * @param c	character to check
 */
bool	ft_ispunct(char c);

/** @brief check is the character in ASCII range
 *
 * checks if value is between `0` and `127` (7-bit unsigned integer)
 *
 * @param c	character to check
 */
bool	ft_isascii(char c);

//## char manipulation

/** @brief convert character to uppercase
 *
 * @param c	lowercase character
 * @return	uppercase character
 */
char	ft_toupper(char c);
/** @brief convert character to lowercase
 *
 * @param c	uppercase character
 * @return	lowercase character
 */
char	ft_tolower(char c);

#endif
