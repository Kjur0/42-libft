/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:45:24 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 15:09:33 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, long unsigned int n)
{
	const unsigned char	*ptr = s;
	unsigned char		byte;
	long unsigned int	i;

	byte = c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == byte)
			return ((unsigned char *)ptr + i);
		i++;
	}
	return (0);
}
