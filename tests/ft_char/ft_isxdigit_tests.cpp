/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit_tests.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 03:11:01 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:11:03 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_isxdigit)
{
	EXPECT_FALSE(ft_isxdigit('\0'));
	EXPECT_FALSE(ft_isxdigit('\b'));
	EXPECT_FALSE(ft_isxdigit('\t'));
	EXPECT_FALSE(ft_isxdigit('\n'));
	EXPECT_FALSE(ft_isxdigit('\v'));
	EXPECT_FALSE(ft_isxdigit('\f'));
	EXPECT_FALSE(ft_isxdigit('\r'));
	EXPECT_FALSE(ft_isxdigit('\x0F'));
	EXPECT_FALSE(ft_isxdigit('\x10'));
	EXPECT_FALSE(ft_isxdigit('\x1F'));
	EXPECT_FALSE(ft_isxdigit(' '));
	EXPECT_FALSE(ft_isxdigit('!'));
	EXPECT_FALSE(ft_isxdigit('$'));
	EXPECT_FALSE(ft_isxdigit('*'));
	EXPECT_FALSE(ft_isxdigit('\''));
	EXPECT_FALSE(ft_isxdigit(','));
	EXPECT_FALSE(ft_isxdigit('.'));
	EXPECT_FALSE(ft_isxdigit('/'));
	EXPECT_TRUE(ft_isxdigit('0'));
	EXPECT_TRUE(ft_isxdigit('1'));
	EXPECT_TRUE(ft_isxdigit('2'));
	EXPECT_TRUE(ft_isxdigit('9'));
	EXPECT_FALSE(ft_isxdigit(':'));
	EXPECT_FALSE(ft_isxdigit('@'));
	EXPECT_TRUE(ft_isxdigit('A'));
	EXPECT_TRUE(ft_isxdigit('F'));
	EXPECT_FALSE(ft_isxdigit('G'));
	EXPECT_FALSE(ft_isxdigit('W'));
	EXPECT_FALSE(ft_isxdigit('Z'));
	EXPECT_FALSE(ft_isxdigit('['));
	EXPECT_FALSE(ft_isxdigit('\\'));
	EXPECT_FALSE(ft_isxdigit('`'));
	EXPECT_TRUE(ft_isxdigit('a'));
	EXPECT_TRUE(ft_isxdigit('f'));
	EXPECT_FALSE(ft_isxdigit('g'));
	EXPECT_FALSE(ft_isxdigit('w'));
	EXPECT_FALSE(ft_isxdigit('z'));
	EXPECT_FALSE(ft_isxdigit('{'));
	EXPECT_FALSE(ft_isxdigit('\x7F'));
	EXPECT_FALSE(ft_isxdigit('\x80'));
	EXPECT_FALSE(ft_isxdigit('\xFF'));
}
