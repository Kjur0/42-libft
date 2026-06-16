/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:58:06 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 14:22:58 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long unsigned int	ft_strlcat(char *dst, const char *src,
	long unsigned int size)
{
	long unsigned int	i;
	long unsigned int	j;

	i = 0;
	while (i < size - 1 && dst[i])
		i++;
	j = 0;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (i);
}
