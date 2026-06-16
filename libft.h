/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:23:13 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 15:03:51 by kjurkows         ###   ########.fr       */
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
int					ft_isalpha(int c);
/** \brief checks for a digit
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
int					ft_isdigit(int c);
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
int					ft_isalnum(int c);
/** \brief checks is the character in ASCII range
 *
 * checks if value is between `0` and `127` (7-bit unsigned integer)
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
int					ft_isascii(int c);
/** \brief checks is the character printable (non-control)
 *
 * \param c character to check
 * \retval 0 `false`
 * \retval 1 `true`
 */
int					ft_isprint(int c);

/** \brief convert character to uppercase
 *
 * \param c lowercase character
 * \return uppercase character
 */
int					ft_toupper(int c);
/** \brief convert character to lowercase
 *
 * \param c uppercase character
 * \return lowercase character
 */
int					ft_tolower(int c);

/** \brief calculate string length
 *
 * count characters up to first `NUL`-terminator (`'\0'`)
 *
 * \param s string being array of `char`
 * \return lenght of a string
 */
long unsigned int	ft_strlen(const char *s);
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
long unsigned int	ft_strlcpy(char *dst, const char *src,
						long unsigned int size);
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
long unsigned int	ft_strlcat(char *dst, const char *src,
						long unsigned int size);
/** \brief locate character in a string
 *
 * first occurrence
 *
 * \warning multibyte chars are unsupported
 *
 * \param s string
 * \param c char to locate
 * \return pointer to first occurrence
 * \retval 0 character not found
*/
char				*ft_strchr(const char *s, int c);
/** \brief locate character in a string (reverse)
 *
 * last occurrence
 *
 * \warning multibyte chars are unsupported
 *
 * \param s string
 * \param c char to locate
 * \return pointer to last occurrence
 * \retval 0 character not found
 */
char				*ft_strrchr(const char *s, int c);
/** \brief compare two strings
 *
 * compares only first non-matching character.
 * operates on ASCII codes
 *
 * \param s1	first string
 * \param s2	second string
 * \param n		max lenght for comparison
 * \return difference between first unmatched chars
 * \retval 0 no difference
 */
int					ft_strncmp(const char *s1, const char *s2,
						long unsigned int n);

/** \brief fill memory area with constant byte
 *
 * \param s pointer to memory area
 * \param c constant byte for filling
 * \param n number of bytes to fill
 * \return pointer to filled memory (`s`)
 */
void				*ft_memset(void *s, int c, long unsigned int n);
/** \brief fill memory area with zero
 *
 * \param s pointer to memory area
 * \param n number of bytes to zero
 */
void				ft_bzero(void *s, long unsigned int n);
/** \brief copy memory area
 *
 * \warning `src` and `dest` must not overlap
 *
 * \param dest	pointer to destination
 * \param src	pointer to source
 * \param n		number of bytes to copy (lenght)
 * \return pointer to destination
 */
void				*ft_memcpy(void *dest, const void *src,
						long unsigned int n);
/** \brief move memory area
 *
 * \warning `src` and `dest` may overlap, but `src` might be overridden
 *
 * \param dest	pointer to destination
 * \param src	pointer to source
 * \param n		number of bytes to move (lenght)
 * \return pointer to destination
 */
void				*ft_memmove(void *dest, const void *src,
						long unsigned int n);
/** \brief scan memory for a byte
 *
 * first occurrence
 *
 * \param s pointer to memory area
 * \param c byte to search for
 * \param n size of memory area
 * \return pointer to first occurrence
 * \retval 0 byte not found
*/
void				*ft_memchr(const void *s, int c, long unsigned int n);
/** compare memory areas
 *
 * \param s1	first memory area
 * \param s2	second memory area
 * \param n		size to compare
 * \return difference between first unmatched bytes
 * \retval 0 no difference
*/
int					ft_memcmp(const void *s1, const void *s2,
						long unsigned int n);

#endif
