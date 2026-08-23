/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:35:05 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 04:11:00 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_mem.h>
//## memory manipulation

//import `malloc`
#include <malloc.h>

/** @brief allocate dynamic memory for an array
 *
 * @param nmemb	number of members
 * @param size	size of a member
 * @return		pointer to dynamic memory
 * @retval 0	allocation failed
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	t_byte	*ptr;
	size_t	total_size;

	if (nmemb == 0)
		nmemb = 1;
	if (size == 0)
		size = 1;
	if (size > __SIZE_MAX__ / nmemb)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr)
		ft_bzero(ptr, total_size);
	return (ptr);
}
