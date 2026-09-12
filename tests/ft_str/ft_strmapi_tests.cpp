/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:25:56 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/12 13:31:46 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_strmapi)
{
	const char	*str = "aaaaaaaaaaaaaaaaaaa";

	char	*result = ft_strmapi(str, [](size_t i, char c) -> char {
		return c + i + 'A' - 'a';
	});

	ASSERT_NE(result, nullptr);
	EXPECT_STREQ(result, "ABCDEFGHIJKLMNOPQRS");

	free(result);
}
