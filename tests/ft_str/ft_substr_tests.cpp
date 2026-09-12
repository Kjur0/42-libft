/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_tests.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:42:04 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/12 13:43:50 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_substr)
{
	const char *s = "Hello, World!";

	char *result = ft_substr(s, 7, 5);
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "World");

	free(result);

	result = ft_substr(s, 0, 5);
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "Hello");

	free(result);

	result = ft_substr(s, 7, 20);
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "World!");

	free(result);

	result = ft_substr(s, 20, 5);
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "");

	free(result);

	result = ft_substr(nullptr, 0, 5);
	ASSERT_EQ(result, nullptr);

	result = ft_substr(s, 0, 0);
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "");

	free(result);

	result = ft_substr(s, 30, 20);
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "");

	free(result);
}
