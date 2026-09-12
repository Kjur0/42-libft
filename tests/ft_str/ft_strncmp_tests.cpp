/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:21:50 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/12 13:25:22 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_strncmp)
{
	const char	*str1 = "Hello my awesome 42!";
	const char	*str2 = "Hello my awesome 42!";
	const char	*str3 = "Hello my awesome 43!";
	const char	*str4 = "Hello my awesome 41!";
	const char	*str5 = "Hello my awesome 42! and more";
	const char	*str6 = "Hello my awesome 42! and less";

	EXPECT_EQ(ft_strncmp(str1, str2, 20), 0);
	EXPECT_EQ(ft_strncmp(str1, str2, 200), 0);
	EXPECT_EQ(ft_strncmp(str1, str3, 20), -1);
	EXPECT_EQ(ft_strncmp(str1, str4, 20), 1);
	EXPECT_EQ(ft_strncmp(str1, str5, 20), 0);
	EXPECT_EQ(ft_strncmp(str1, str5, 30), -32);
	EXPECT_EQ(ft_strncmp(str1, str6, 20), 0);
	EXPECT_EQ(ft_strncmp(str5, str6, 30), 1);

	EXPECT_EQ(ft_strncmp(str1, nullptr, 10), 72);
	EXPECT_EQ(ft_strncmp(nullptr, str1, 10), -72);
	EXPECT_EQ(ft_strncmp(nullptr, nullptr, 10), 0);
}
