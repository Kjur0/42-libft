/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_tests.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:49:53 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/12 13:52:53 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_mem, ft_bzero)
{
	char mem[20];

	ft_bzero(mem, 20);
	EXPECT_EQ(memcmp(mem, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 20), 0);

	mem[0] = 'A';
	mem[1] = 'B';
	mem[2] = 'C';

	ft_bzero(mem, 0);
	EXPECT_EQ(mem[0], 'A');
	EXPECT_EQ(mem[1], 'B');
	EXPECT_EQ(mem[2], 'C');

	ft_bzero(mem, 2);
	EXPECT_EQ(mem[0], '\0');
	EXPECT_EQ(mem[1], '\0');
	EXPECT_EQ(mem[2], 'C');

	EXPECT_EXIT({
		ft_bzero(nullptr, 5);
		exit(0);
	}, ::testing::ExitedWithCode(0), "");
}
