/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 03:10:50 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:10:52 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_ispunct)
{
	EXPECT_FALSE(ft_ispunct('\0'));
	EXPECT_FALSE(ft_ispunct('\b'));
	EXPECT_FALSE(ft_ispunct('\t'));
	EXPECT_FALSE(ft_ispunct('\n'));
	EXPECT_FALSE(ft_ispunct('\v'));
	EXPECT_FALSE(ft_ispunct('\f'));
	EXPECT_FALSE(ft_ispunct('\r'));
	EXPECT_FALSE(ft_ispunct('\x0F'));
	EXPECT_FALSE(ft_ispunct('\x10'));
	EXPECT_FALSE(ft_ispunct('\x1F'));
	EXPECT_FALSE(ft_ispunct(' '));
	EXPECT_TRUE(ft_ispunct('!'));
	EXPECT_TRUE(ft_ispunct('$'));
	EXPECT_TRUE(ft_ispunct('*'));
	EXPECT_TRUE(ft_ispunct('\''));
	EXPECT_TRUE(ft_ispunct(','));
	EXPECT_TRUE(ft_ispunct('.'));
	EXPECT_TRUE(ft_ispunct('/'));
	EXPECT_FALSE(ft_ispunct('0'));
	EXPECT_FALSE(ft_ispunct('1'));
	EXPECT_FALSE(ft_ispunct('2'));
	EXPECT_FALSE(ft_ispunct('9'));
	EXPECT_TRUE(ft_ispunct(':'));
	EXPECT_TRUE(ft_ispunct('@'));
	EXPECT_FALSE(ft_ispunct('A'));
	EXPECT_FALSE(ft_ispunct('F'));
	EXPECT_FALSE(ft_ispunct('G'));
	EXPECT_FALSE(ft_ispunct('W'));
	EXPECT_FALSE(ft_ispunct('Z'));
	EXPECT_TRUE(ft_ispunct('['));
	EXPECT_TRUE(ft_ispunct('\\'));
	EXPECT_TRUE(ft_ispunct('`'));
	EXPECT_FALSE(ft_ispunct('a'));
	EXPECT_FALSE(ft_ispunct('f'));
	EXPECT_FALSE(ft_ispunct('g'));
	EXPECT_FALSE(ft_ispunct('w'));
	EXPECT_FALSE(ft_ispunct('z'));
	EXPECT_TRUE(ft_ispunct('{'));
	EXPECT_FALSE(ft_ispunct('\x7F'));
	EXPECT_FALSE(ft_ispunct('\x80'));
	EXPECT_FALSE(ft_ispunct('\xFF'));
}
