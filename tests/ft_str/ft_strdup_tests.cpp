/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_tests.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:38:27 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:39:50 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_strdup)
{
	char *str;

	str = ft_strdup("Hello");
	ASSERT_NE(str, nullptr);
	EXPECT_STREQ(str, "Hello");
	free(str);

	str = ft_strdup(nullptr);
	EXPECT_EQ(str, nullptr);
}
