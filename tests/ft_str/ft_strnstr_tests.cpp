/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:30:53 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/12 13:35:41 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_strnstr)
{
	const char *big = "Hello, World!";
	const char *little = "World";

	char *result = ft_strnstr(big, little, 13);

	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "World!");
	EXPECT_EQ(result, big + 7);

	result = ft_strnstr(big, "NotFound", 13);
	EXPECT_EQ(result, nullptr);

	result = ft_strnstr(big, little, 5);
	EXPECT_EQ(result, nullptr);

	result = ft_strnstr(big, "", 13);
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, big);

	result = ft_strnstr(big, "Hello, World! Hello 42 :)", 25);
	EXPECT_EQ(result, nullptr);

	result = ft_strnstr(nullptr, little, 13);
	EXPECT_EQ(result, nullptr);

	result = ft_strnstr(big, nullptr, 13);
	EXPECT_EQ(result, nullptr);

	result = ft_strnstr(nullptr, nullptr, 13);
	EXPECT_EQ(result, nullptr);

	result = ft_strnstr(big, little, 0);
	EXPECT_EQ(result, nullptr);
}
