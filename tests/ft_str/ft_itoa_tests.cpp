/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 20:52:45 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:01:07 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>
#include <limits.h>

TEST(ft_str, ft_itoa)
{
	char	*str;

	str = ft_itoa(0);
	EXPECT_STREQ(str, "0");
	if (str)
		free(str);

	str = ft_itoa(-42);
	EXPECT_STREQ(str, "-42");
	if (str)
		free(str);

	str = ft_itoa(-1);
	EXPECT_STREQ(str, "-1");
	if (str)
		free(str);

	str = ft_itoa(-9);
	EXPECT_STREQ(str, "-9");
	if (str)
		free(str);

	str = ft_itoa(-10);
	EXPECT_STREQ(str, "-10");
	if (str)
		free(str);

	str = ft_itoa(INT_MIN);
	EXPECT_STREQ(str, "-2147483648");
	if (str)
		free(str);

	str = ft_itoa(42);
	EXPECT_STREQ(str, "42");
	if (str)
		free(str);

	str = ft_itoa(1);
	EXPECT_STREQ(str, "1");
	if (str)
		free(str);

	str = ft_itoa(9);
	EXPECT_STREQ(str, "9");
	if (str)
		free(str);

	str = ft_itoa(10);
	EXPECT_STREQ(str, "10");
	if (str)
		free(str);

	str = ft_itoa(INT_MAX);
	EXPECT_STREQ(str, "2147483647");
	if (str)
		free(str);
}
