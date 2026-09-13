/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:27:53 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/13 15:59:33 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_strlcpy)
{
	const char	*src1 = "Hello world";
	const char	*src2 = "12345679801234567890123456789012345678901234567890123";
	const char	*src3 = "42";
	const char	*src4 = "";
	char		dst[50] = "";

	EXPECT_EQ(ft_strlcpy(dst, src1, 0), 11);
	EXPECT_STREQ(dst, "");

	EXPECT_EQ(ft_strlcpy(dst, src1, 50), 11);
	EXPECT_STREQ(dst, src1);

	EXPECT_EQ(ft_strlcpy(dst, src1, 6), 11);
	EXPECT_STREQ(dst, "Hello");

	EXPECT_EQ(ft_strlcpy(dst, src2, 50), 53);
	EXPECT_STREQ(dst, "1234567980123456789012345678901234567890123456789");

	EXPECT_EQ(ft_strlcpy(dst, src3, 50), 2);
	EXPECT_STREQ(dst, "42");

	EXPECT_EQ(ft_strlcpy(dst, src4, 5), 0);

	EXPECT_EQ(ft_strlcpy(dst, nullptr, 5), 0);

	EXPECT_EQ(ft_strlcpy(nullptr, src4, 5), 0);

	EXPECT_EQ(ft_strlcpy(nullptr, nullptr, 5), 0);
}
