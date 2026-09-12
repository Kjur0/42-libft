/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:35:56 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/12 13:44:20 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

TEST(ft_str, ft_strtrim)
{
	char *result = ft_strtrim("   Hello, World!   ", " ");
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "Hello, World!");

	free(result);

	result = ft_strtrim("   Hello, World!   ", nullptr);
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "   Hello, World!   ");

	free(result);

	result = ft_strtrim(nullptr, " ");
	ASSERT_EQ(result, nullptr);

	result = ft_strtrim(nullptr, nullptr);
	ASSERT_EQ(result, nullptr);

	result = ft_strtrim("Hello, World!", " ");
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "Hello, World!");

	free(result);

	result = ft_strtrim("   ", " ");
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "");

	free(result);

	result = ft_strtrim("Hello, World!", "Hedo!");
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "llo, Worl");

	free(result);
}
