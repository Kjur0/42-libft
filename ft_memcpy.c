/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:07:11 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 14:51:03 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, long unsigned int n)
{
	long unsigned int	i;
	unsigned char		*dest_writeable;
	const unsigned char	*src_readable = src;

	i = 0;
	dest_writeable = dest;
	while (i < n)
	{
		dest_writeable[i] = src_readable[i];
		i++;
	}
	return (dest_writeable);
}
