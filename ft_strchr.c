/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:20:41 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 15:00:24 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	long unsigned int	i;
	char				wanted;

	i = 0;
	wanted = c;
	while (s[i] != wanted)
	{
		if (!s[i])
			return (0);
		i++;
	}
	return ((char *)s + i);
}
