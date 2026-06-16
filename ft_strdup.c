/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:47:29 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 17:50:59 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern int	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char					*str;
	long unsigned int		i;
	const long unsigned int	len = ft_strlen(s) + 1;

	i = 0;
	str = malloc(sizeof(char) * len);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
