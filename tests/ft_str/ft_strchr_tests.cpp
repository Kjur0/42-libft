/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_tests.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:17:29 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:21:25 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_strchr)
{
	const char	*str = "Hello my awesome 42!";
	char		*result;

	result = ft_strchr(str, 'o');
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "o my awesome 42!");
	EXPECT_EQ(result, str + 4);

	result = ft_strchr(str, 'H');
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "Hello my awesome 42!");
	EXPECT_EQ(result, str);

	result = ft_strchr(str, '!');
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "!");
	EXPECT_EQ(result, str + 19);

	result = ft_strchr(str, '\0');
	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "");
	EXPECT_EQ(result, str + 20);

	result = ft_strchr(str, 'z');
	EXPECT_EQ(result, nullptr);

	result = ft_strchr(nullptr, 'a');
	EXPECT_EQ(result, nullptr);
}
