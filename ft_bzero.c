/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:47:53 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 14:23:48 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, long unsigned int n)
{
	char				*ptr;
	long unsigned int	i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i++] = '\0';
	}
}
