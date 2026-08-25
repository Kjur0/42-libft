/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 03:10:54 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:10:55 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_isspace)
{
	EXPECT_FALSE(ft_isspace('\0'));
	EXPECT_FALSE(ft_isspace('\b'));
	EXPECT_TRUE(ft_isspace('\t'));
	EXPECT_TRUE(ft_isspace('\n'));
	EXPECT_TRUE(ft_isspace('\v'));
	EXPECT_TRUE(ft_isspace('\f'));
	EXPECT_TRUE(ft_isspace('\r'));
	EXPECT_FALSE(ft_isspace('\x0F'));
	EXPECT_FALSE(ft_isspace('\x10'));
	EXPECT_FALSE(ft_isspace('\x1F'));
	EXPECT_TRUE(ft_isspace(' '));
	EXPECT_FALSE(ft_isspace('!'));
	EXPECT_FALSE(ft_isspace('$'));
	EXPECT_FALSE(ft_isspace('*'));
	EXPECT_FALSE(ft_isspace('\''));
	EXPECT_FALSE(ft_isspace(','));
	EXPECT_FALSE(ft_isspace('.'));
	EXPECT_FALSE(ft_isspace('/'));
	EXPECT_FALSE(ft_isspace('0'));
	EXPECT_FALSE(ft_isspace('1'));
	EXPECT_FALSE(ft_isspace('2'));
	EXPECT_FALSE(ft_isspace('9'));
	EXPECT_FALSE(ft_isspace(':'));
	EXPECT_FALSE(ft_isspace('@'));
	EXPECT_FALSE(ft_isspace('A'));
	EXPECT_FALSE(ft_isspace('F'));
	EXPECT_FALSE(ft_isspace('G'));
	EXPECT_FALSE(ft_isspace('W'));
	EXPECT_FALSE(ft_isspace('Z'));
	EXPECT_FALSE(ft_isspace('['));
	EXPECT_FALSE(ft_isspace('\\'));
	EXPECT_FALSE(ft_isspace('`'));
	EXPECT_FALSE(ft_isspace('a'));
	EXPECT_FALSE(ft_isspace('f'));
	EXPECT_FALSE(ft_isspace('g'));
	EXPECT_FALSE(ft_isspace('w'));
	EXPECT_FALSE(ft_isspace('z'));
	EXPECT_FALSE(ft_isspace('{'));
	EXPECT_FALSE(ft_isspace('\x7F'));
	EXPECT_FALSE(ft_isspace('\x80'));
	EXPECT_FALSE(ft_isspace('\xFF'));
}
