/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:43:16 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/15 20:46:38 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i++] = c;
	}
	return (ptr);
}
