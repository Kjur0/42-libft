/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 01:36:10 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:09:55 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_isalnum)
{
	EXPECT_FALSE(ft_isalnum('\0'));
	EXPECT_FALSE(ft_isalnum('\b'));
	EXPECT_FALSE(ft_isalnum('\t'));
	EXPECT_FALSE(ft_isalnum('\n'));
	EXPECT_FALSE(ft_isalnum('\v'));
	EXPECT_FALSE(ft_isalnum('\f'));
	EXPECT_FALSE(ft_isalnum('\r'));
	EXPECT_FALSE(ft_isalnum('\x0F'));
	EXPECT_FALSE(ft_isalnum('\x10'));
	EXPECT_FALSE(ft_isalnum('\x1F'));
	EXPECT_FALSE(ft_isalnum(' '));
	EXPECT_FALSE(ft_isalnum('!'));
	EXPECT_FALSE(ft_isalnum('$'));
	EXPECT_FALSE(ft_isalnum('*'));
	EXPECT_FALSE(ft_isalnum('\''));
	EXPECT_FALSE(ft_isalnum(','));
	EXPECT_FALSE(ft_isalnum('.'));
	EXPECT_FALSE(ft_isalnum('/'));
	EXPECT_TRUE(ft_isalnum('0'));
	EXPECT_TRUE(ft_isalnum('1'));
	EXPECT_TRUE(ft_isalnum('2'));
	EXPECT_TRUE(ft_isalnum('9'));
	EXPECT_FALSE(ft_isalnum(':'));
	EXPECT_FALSE(ft_isalnum('@'));
	EXPECT_TRUE(ft_isalnum('A'));
	EXPECT_TRUE(ft_isalnum('F'));
	EXPECT_TRUE(ft_isalnum('G'));
	EXPECT_TRUE(ft_isalnum('W'));
	EXPECT_TRUE(ft_isalnum('Z'));
	EXPECT_FALSE(ft_isalnum('['));
	EXPECT_FALSE(ft_isalnum('\\'));
	EXPECT_FALSE(ft_isalnum('`'));
	EXPECT_TRUE(ft_isalnum('a'));
	EXPECT_TRUE(ft_isalnum('f'));
	EXPECT_TRUE(ft_isalnum('g'));
	EXPECT_TRUE(ft_isalnum('w'));
	EXPECT_TRUE(ft_isalnum('z'));
	EXPECT_FALSE(ft_isalnum('{'));
	EXPECT_FALSE(ft_isalnum('\x7F'));
	EXPECT_FALSE(ft_isalnum('\x80'));
	EXPECT_FALSE(ft_isalnum('\xFF'));
}
