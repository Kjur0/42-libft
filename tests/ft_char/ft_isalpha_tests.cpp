/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 01:36:10 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:09:58 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_isalpha)
{
	EXPECT_FALSE(ft_isalpha('\0'));
	EXPECT_FALSE(ft_isalpha('\b'));
	EXPECT_FALSE(ft_isalpha('\t'));
	EXPECT_FALSE(ft_isalpha('\n'));
	EXPECT_FALSE(ft_isalpha('\v'));
	EXPECT_FALSE(ft_isalpha('\f'));
	EXPECT_FALSE(ft_isalpha('\r'));
	EXPECT_FALSE(ft_isalpha('\x0F'));
	EXPECT_FALSE(ft_isalpha('\x10'));
	EXPECT_FALSE(ft_isalpha('\x1F'));
	EXPECT_FALSE(ft_isalpha(' '));
	EXPECT_FALSE(ft_isalpha('!'));
	EXPECT_FALSE(ft_isalpha('$'));
	EXPECT_FALSE(ft_isalpha('*'));
	EXPECT_FALSE(ft_isalpha('\''));
	EXPECT_FALSE(ft_isalpha(','));
	EXPECT_FALSE(ft_isalpha('.'));
	EXPECT_FALSE(ft_isalpha('/'));
	EXPECT_FALSE(ft_isalpha('0'));
	EXPECT_FALSE(ft_isalpha('1'));
	EXPECT_FALSE(ft_isalpha('2'));
	EXPECT_FALSE(ft_isalpha('9'));
	EXPECT_FALSE(ft_isalpha(':'));
	EXPECT_FALSE(ft_isalpha('@'));
	EXPECT_TRUE(ft_isalpha('A'));
	EXPECT_TRUE(ft_isalpha('F'));
	EXPECT_TRUE(ft_isalpha('G'));
	EXPECT_TRUE(ft_isalpha('W'));
	EXPECT_TRUE(ft_isalpha('Z'));
	EXPECT_FALSE(ft_isalpha('['));
	EXPECT_FALSE(ft_isalpha('\\'));
	EXPECT_FALSE(ft_isalpha('`'));
	EXPECT_TRUE(ft_isalpha('a'));
	EXPECT_TRUE(ft_isalpha('f'));
	EXPECT_TRUE(ft_isalpha('g'));
	EXPECT_TRUE(ft_isalpha('w'));
	EXPECT_TRUE(ft_isalpha('z'));
	EXPECT_FALSE(ft_isalpha('{'));
	EXPECT_FALSE(ft_isalpha('\x7F'));
	EXPECT_FALSE(ft_isalpha('\x80'));
	EXPECT_FALSE(ft_isalpha('\xFF'));
}
