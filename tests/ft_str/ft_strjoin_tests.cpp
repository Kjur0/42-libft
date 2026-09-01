/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:47:23 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:51:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_strjoin)
{
	char	*str;

	str = ft_strjoin("Hello ", "World!");
	ASSERT_NE(str, nullptr);
	EXPECT_STREQ(str, "Hello World!");
	free(str);

	str = ft_strjoin(nullptr, "World!");
	ASSERT_NE(str, nullptr);
	EXPECT_STREQ(str, "World!");
	free(str);

	str = ft_strjoin("Hello ", nullptr);
	ASSERT_NE(str, nullptr);
	EXPECT_STREQ(str, "Hello ");
	free(str);

	str = ft_strjoin(nullptr, nullptr);
	ASSERT_EQ(str, nullptr);
}
