/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 20:28:53 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 20:53:11 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>
#include <limits.h>

TEST(ft_str, ft_atol)
{
	EXPECT_EQ(ft_atol("0"), 0);
	EXPECT_EQ(ft_atol("1"), 1);
	EXPECT_EQ(ft_atol("10"), 10);
	EXPECT_EQ(ft_atol("11"), 11);
	EXPECT_EQ(ft_atol("101"), 101);
	EXPECT_EQ(ft_atol("42"), 42);
	EXPECT_EQ(ft_atol("-1"), -1);
	EXPECT_EQ(ft_atol("-2"), -2);
	EXPECT_EQ(ft_atol("-9"), -9);
	EXPECT_EQ(ft_atol("-10"), -10);
	EXPECT_EQ(ft_atol("-101"), -101);
	EXPECT_EQ(ft_atol("-120"), -120);
	EXPECT_EQ(ft_atol("        \t\n\n\r\v 42"), 42);
	EXPECT_EQ(ft_atol("+42"), 42);
	EXPECT_EQ(ft_atol("+9223372036854775807"), LONG_MAX);
	EXPECT_EQ(ft_atol("-9223372036854775808"), LONG_MIN);
	EXPECT_NE(ft_atol("---42"), -42);
}
