/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:35:05 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 17:44:12 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern void	ft_bzero(void *s, long unsigned int n);

void	*ft_calloc(long unsigned int nmemb, long unsigned int size)
{
	unsigned char		*ptr;
	long unsigned int	total_size;

	if (nmemb == 0)
		nmemb = 1;
	if (size == 0)
		size = 1;
	if (size > 18446744073709551615UL / nmemb)
		return (0);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr)
		ft_bzero(ptr, total_size);
	return (ptr);
}
