/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:01:31 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 15:06:04 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, long unsigned int n)
{
	const unsigned char	*mem1 = s1;
	const unsigned char	*mem2 = s2;
	long unsigned int	i;

	i = 0;
	while (i < n - 1 && mem1[i] == mem2[i])
		i++;
	return (mem1[i] - mem2[i]);
}
