/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:19:11 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/12 13:44:35 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_strrchr)
{
	const char	*str = "Hello my awesome 42!";
	char		*result;

	result = ft_strrchr(str, 'o');
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "ome 42!");
	EXPECT_EQ(result, str + 13);

	result = ft_strrchr(str, 'H');
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "Hello my awesome 42!");
	EXPECT_EQ(result, str);

	result = ft_strrchr(str, '!');
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "!");
	EXPECT_EQ(result, str + 19);

	result = ft_strrchr(str, '\0');
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "");
	EXPECT_EQ(result, str + 20);

	result = ft_strrchr(str, 'z');
	EXPECT_EQ(result, nullptr);

	result = ft_strrchr(nullptr, 'a');
	EXPECT_EQ(result, nullptr);
}
