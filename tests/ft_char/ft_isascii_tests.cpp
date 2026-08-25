/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 01:36:10 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:10:22 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_isascii)
{
	EXPECT_TRUE(ft_isascii('\0'));
	EXPECT_TRUE(ft_isascii('\b'));
	EXPECT_TRUE(ft_isascii('\t'));
	EXPECT_TRUE(ft_isascii('\n'));
	EXPECT_TRUE(ft_isascii('\v'));
	EXPECT_TRUE(ft_isascii('\f'));
	EXPECT_TRUE(ft_isascii('\r'));
	EXPECT_TRUE(ft_isascii('\x0F'));
	EXPECT_TRUE(ft_isascii('\x10'));
	EXPECT_TRUE(ft_isascii('\x1F'));
	EXPECT_TRUE(ft_isascii(' '));
	EXPECT_TRUE(ft_isascii('!'));
	EXPECT_TRUE(ft_isascii('$'));
	EXPECT_TRUE(ft_isascii('*'));
	EXPECT_TRUE(ft_isascii('\''));
	EXPECT_TRUE(ft_isascii(','));
	EXPECT_TRUE(ft_isascii('.'));
	EXPECT_TRUE(ft_isascii('/'));
	EXPECT_TRUE(ft_isascii('0'));
	EXPECT_TRUE(ft_isascii('1'));
	EXPECT_TRUE(ft_isascii('2'));
	EXPECT_TRUE(ft_isascii('9'));
	EXPECT_TRUE(ft_isascii(':'));
	EXPECT_TRUE(ft_isascii('@'));
	EXPECT_TRUE(ft_isascii('A'));
	EXPECT_TRUE(ft_isascii('F'));
	EXPECT_TRUE(ft_isascii('G'));
	EXPECT_TRUE(ft_isascii('W'));
	EXPECT_TRUE(ft_isascii('Z'));
	EXPECT_TRUE(ft_isascii('['));
	EXPECT_TRUE(ft_isascii('\\'));
	EXPECT_TRUE(ft_isascii('`'));
	EXPECT_TRUE(ft_isascii('a'));
	EXPECT_TRUE(ft_isascii('f'));
	EXPECT_TRUE(ft_isascii('g'));
	EXPECT_TRUE(ft_isascii('w'));
	EXPECT_TRUE(ft_isascii('z'));
	EXPECT_TRUE(ft_isascii('{'));
	EXPECT_TRUE(ft_isascii('\x7F'));
	EXPECT_FALSE(ft_isascii('\x80'));
	EXPECT_FALSE(ft_isascii('\xFF'));
}
