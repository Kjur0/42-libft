/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:43:16 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 14:59:41 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, long unsigned int n)
{
	unsigned char		*ptr;
	unsigned char		byte;
	long unsigned int	i;

	i = 0;
	byte = c;
	ptr = s;
	while (i < n)
	{
		ptr[i++] = byte;
	}
	return (ptr);
}
