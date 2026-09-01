/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_tests.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:41:25 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:45:51 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_striteri)
{
	char	str[20] = "Hello my awesome 42";

	ft_striteri(str, [](size_t i, char *c){
		*c = i + 'a';
	});
	EXPECT_STREQ(str, "abcdefghijklmnopqrs");
}
