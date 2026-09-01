/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 20:28:53 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 20:53:15 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>
#include <limits.h>

TEST(ft_str, ft_atoi)
{
	EXPECT_EQ(ft_atoi("0"), 0);
	EXPECT_EQ(ft_atoi("1"), 1);
	EXPECT_EQ(ft_atoi("10"), 10);
	EXPECT_EQ(ft_atoi("11"), 11);
	EXPECT_EQ(ft_atoi("101"), 101);
	EXPECT_EQ(ft_atoi("42"), 42);
	EXPECT_EQ(ft_atoi("-1"), -1);
	EXPECT_EQ(ft_atoi("-2"), -2);
	EXPECT_EQ(ft_atoi("-9"), -9);
	EXPECT_EQ(ft_atoi("-10"), -10);
	EXPECT_EQ(ft_atoi("-101"), -101);
	EXPECT_EQ(ft_atoi("-120"), -120);
	EXPECT_EQ(ft_atoi("        \t\n\n\r\v 42"), 42);
	EXPECT_EQ(ft_atoi("+42"), 42);
	EXPECT_EQ(ft_atoi("+2147483647"), INT_MAX);
	EXPECT_EQ(ft_atoi("-2147483648"), INT_MIN);
	EXPECT_NE(ft_atoi("---42"), -42);
}
