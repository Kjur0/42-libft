/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_tests.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:45:26 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/12 13:53:49 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_mem, ft_memset)
{
	char mem[20];

	EXPECT_EQ(ft_memset(mem, 'A', 20), mem);
	EXPECT_EQ(memcmp(mem, "AAAAAAAAAAAAAAAAAAAA", 20), 0);

	ft_memset(mem, 'B', 10);
	EXPECT_EQ(memcmp(mem, "BBBBBBBBBBAAAAAAAAAA", 20), 0);

	EXPECT_EQ(ft_memset(mem, 'C', 0), mem);
	EXPECT_EQ(memcmp(mem, "BBBBBBBBBBAAAAAAAAAA", 20), 0);

	ASSERT_EQ(ft_memset(nullptr, 'D', 5), nullptr);
}
