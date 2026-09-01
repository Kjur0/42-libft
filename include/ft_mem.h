/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 03:06:37 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 20:47:59 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

# include <stddef.h>

/// @brief byte
typedef unsigned char	t_byte;

//## memory manipulation

/** @brief fill memory area with constant byte
 *
 * @param s	pointer to memory area
 * @param c	constant byte for filling
 * @param n	number of bytes to fill
 * @return	pointer to filled memory (`s`)
 */
void	*ft_memset(void *s, t_byte c, size_t n);
/** @brief fill memory area with zero
 *
 * @param s	pointer to memory area
 * @param n	number of bytes to zero
 */
void	ft_bzero(void *s, size_t n);

/** @brief copy memory area
 *
 * @warning `src` and `dest` must not overlap
 *
 * @param dest	pointer to destination
 * @param src	pointer to source
 * @param n		number of bytes to copy (length)
 * @return		pointer to destination
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);
/** @brief move memory area
 *
 * @warning `src` and `dest` may overlap, but `src` might be overridden
 *
 * @param dest	pointer to destination
 * @param src	pointer to source
 * @param n		number of bytes to move (length)
 * @return		pointer to destination
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/** @brief scan memory for a byte
 *
 * first occurrence
 *
 * @param s		pointer to memory area
 * @param c		byte to search for
 * @param n		size of memory area
 * @return		pointer to first occurrence
 * @retval 0	byte not found
*/
void	*ft_memchr(const void *s, t_byte c, size_t n);
/** @brief scan memory for a byte (reverse)
 *
 * last occurrence
 *
 * @param s		pointer to memory area
 * @param c		byte to search for
 * @param n		size of memory area
 * @return		pointer to first occurrence
 * @retval 0	byte not found
*/
void	*ft_memrchr(const void *s, t_byte c, size_t n);

/** @brief compare memory areas
 *
 * @param s1	first memory area
 * @param s2	second memory area
 * @param n		size to compare
 * @return		difference between first unmatched bytes
 * @retval 0	no difference
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/** @brief allocate dynamic memory for an array
 *
 * @param nmemb	number of members
 * @param size	size of a member
 * @return		pointer to dynamic memory
 * @retval 0	allocation failed
 */
void	*ft_calloc(size_t nmemb, size_t size);

#endif
