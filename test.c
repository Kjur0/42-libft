/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:03:23 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/13 16:08:24 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char		dst[50];
	const char	*src = "Hello world";

	for (int i = 0; i < 40; i++)
		dst[i] = 'a';
	dst[40] = 0;
	printf("\t%ld\n|%s|\n\n", strlcat(dst, src, 6), dst);
}
