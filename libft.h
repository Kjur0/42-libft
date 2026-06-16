/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:23:13 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 14:11:47 by kjurkows         ###   ########.fr       */
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

/** \brief calculate string length
 *
 * count characters up to first `NUL`-terminator (`'\0'`)
 *
 * \param s string being array of `char`
 * \return lenght of a string
 */
unsigned int	ft_strlen(const char *s);
/** \brief safely copy a string
 *
 * copy up to specified amount of characters from `NUL`-terminated string
 * ensuring the result is `NUL`-terminated and doesn't exceed size limit
 *
 * \param dst	pointer to destination
 * \param src	pointer to source
 * \param size	max size of the result
 * \return total lenght of result string
 */
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
/** \brief safely concatenate two strings
 *
 * concatenate two string to a string of specified lenght
 * ensuring the result is `NUL`-terminated and doesn't exceed size limit
 *
 * \param dst	pointer to destination
 * \param src	pointer to source
 * \param size	max size of the result
 * \return total lenght of result string
 */
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);

/** \brief fill memory area with constant byte
 *
 * \param s pointer to memory area
 * \param c constant byte for filling
 * \param n number of bytes to fill
 * \return pointer to filled memory (`s`)
 */
void			*ft_memset(void *s, int c, unsigned int n);
/** \brief fill memory area with zero
 *
 * \param s pointer to memory area
 * \param n number of bytes to zero
 */
void			ft_bzero(void *s, unsigned int n);
/** \brief copy memory area
 *
 * \warning `src` and `dest` must not overlap
 *
 * \param dest	pointer to destination
 * \param src	pointer to source
 * \param n		number of bytes to copy (lenght)
 * \return pointer to destination
 */
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
/** \brief move memory area
 *
 * \warning `src` and `dest` may overlap, but `src` might be overridden
 *
 * \param dest	pointer to destination
 * \param src	pointer to source
 * \param n		number of bytes to move (lenght)
 * \return pointer to destination
 */
void			*ft_memmove(void *dest, const void *src, unsigned int n);

#endif
