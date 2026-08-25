/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 03:10:47 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:10:48 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_isprint)
{
	EXPECT_FALSE(ft_isprint('\0'));
	EXPECT_FALSE(ft_isprint('\b'));
	EXPECT_FALSE(ft_isprint('\t'));
	EXPECT_FALSE(ft_isprint('\n'));
	EXPECT_FALSE(ft_isprint('\v'));
	EXPECT_FALSE(ft_isprint('\f'));
	EXPECT_FALSE(ft_isprint('\r'));
	EXPECT_FALSE(ft_isprint('\x0F'));
	EXPECT_FALSE(ft_isprint('\x10'));
	EXPECT_FALSE(ft_isprint('\x1F'));
	EXPECT_TRUE(ft_isprint(' '));
	EXPECT_TRUE(ft_isprint('!'));
	EXPECT_TRUE(ft_isprint('$'));
	EXPECT_TRUE(ft_isprint('*'));
	EXPECT_TRUE(ft_isprint('\''));
	EXPECT_TRUE(ft_isprint(','));
	EXPECT_TRUE(ft_isprint('.'));
	EXPECT_TRUE(ft_isprint('/'));
	EXPECT_TRUE(ft_isprint('0'));
	EXPECT_TRUE(ft_isprint('1'));
	EXPECT_TRUE(ft_isprint('2'));
	EXPECT_TRUE(ft_isprint('9'));
	EXPECT_TRUE(ft_isprint(':'));
	EXPECT_TRUE(ft_isprint('@'));
	EXPECT_TRUE(ft_isprint('A'));
	EXPECT_TRUE(ft_isprint('F'));
	EXPECT_TRUE(ft_isprint('G'));
	EXPECT_TRUE(ft_isprint('W'));
	EXPECT_TRUE(ft_isprint('Z'));
	EXPECT_TRUE(ft_isprint('['));
	EXPECT_TRUE(ft_isprint('\\'));
	EXPECT_TRUE(ft_isprint('`'));
	EXPECT_TRUE(ft_isprint('a'));
	EXPECT_TRUE(ft_isprint('f'));
	EXPECT_TRUE(ft_isprint('g'));
	EXPECT_TRUE(ft_isprint('w'));
	EXPECT_TRUE(ft_isprint('z'));
	EXPECT_TRUE(ft_isprint('{'));
	EXPECT_FALSE(ft_isprint('\x7F'));
	EXPECT_FALSE(ft_isprint('\x80'));
	EXPECT_FALSE(ft_isprint('\xFF'));
}
