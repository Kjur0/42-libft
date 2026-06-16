/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:15:44 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 17:56:31 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && big[i + j] && big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)big + i);
		if (!big[i + j])
			return (0);
		i++;
	}
	return (0);
}
