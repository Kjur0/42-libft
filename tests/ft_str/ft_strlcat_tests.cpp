/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 15:57:36 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/13 16:17:12 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_strlcat)
{
	const char	*src1 = "Hello world";
	const char	*src2 = "12345679801234567890123456789012345678901234567890123";
	const char	*src3 = "42";
	const char	*src4 = "";
	char	dst[50] = "";

	EXPECT_EQ(ft_strlcat(dst, src1, 0), 11);
	EXPECT_STREQ(dst, "");

	EXPECT_EQ(ft_strlcat(dst, src1, 50), 11);
	ASSERT_STREQ(dst, src1);

	EXPECT_EQ(ft_strlcat(dst, src1, 50), 22);
	EXPECT_STREQ(dst, "Hello worldHello world");

	dst[0] = '\0';
	EXPECT_EQ(ft_strlcat(dst, src2, 10), 53);
	ASSERT_STREQ(dst, "123456798");

	EXPECT_EQ(ft_strlcat(dst, src3, 1), 3);
	ASSERT_STREQ(dst, "123456798");

	EXPECT_EQ(ft_strlcat(dst, src3, 13), 11);
	ASSERT_STREQ(dst, "12345679842");

	EXPECT_EQ(ft_strlcat(dst, src4, 50), 11);
	ASSERT_STREQ(dst, "12345679842");

	dst[0] = '\0';
	EXPECT_EQ(ft_strlcat(dst, src4, 50), 0);
	EXPECT_STREQ(dst, "");

	EXPECT_EQ(ft_strlcat(nullptr, src3, 5), 2);
	dst[0] = '1';
	EXPECT_EQ(ft_strlcat(dst, nullptr, 5), 5);
	EXPECT_EQ(ft_strlcat(dst, nullptr, 50), 11);
	EXPECT_EQ(ft_strlcat(nullptr, nullptr, 0), 0);
}
