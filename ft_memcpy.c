/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:07:11 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 13:14:38 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*dest_writeable;
	const char		*src_readable = src;

	i = 0;
	dest_writeable = dest;
	while (i < n)
	{
		dest_writeable[i] = src_readable[i];
		i++;
	}
	return (dest_writeable);
}
