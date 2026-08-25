/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 01:36:10 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:10:25 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_isblank)
{
	EXPECT_FALSE(ft_isblank('\0'));
	EXPECT_FALSE(ft_isblank('\b'));
	EXPECT_TRUE(ft_isblank('\t'));
	EXPECT_FALSE(ft_isblank('\n'));
	EXPECT_FALSE(ft_isblank('\v'));
	EXPECT_FALSE(ft_isblank('\f'));
	EXPECT_FALSE(ft_isblank('\r'));
	EXPECT_FALSE(ft_isblank('\x0F'));
	EXPECT_FALSE(ft_isblank('\x10'));
	EXPECT_FALSE(ft_isblank('\x1F'));
	EXPECT_TRUE(ft_isblank(' '));
	EXPECT_FALSE(ft_isblank('!'));
	EXPECT_FALSE(ft_isblank('$'));
	EXPECT_FALSE(ft_isblank('*'));
	EXPECT_FALSE(ft_isblank('\''));
	EXPECT_FALSE(ft_isblank(','));
	EXPECT_FALSE(ft_isblank('.'));
	EXPECT_FALSE(ft_isblank('/'));
	EXPECT_FALSE(ft_isblank('0'));
	EXPECT_FALSE(ft_isblank('1'));
	EXPECT_FALSE(ft_isblank('2'));
	EXPECT_FALSE(ft_isblank('9'));
	EXPECT_FALSE(ft_isblank(':'));
	EXPECT_FALSE(ft_isblank('@'));
	EXPECT_FALSE(ft_isblank('A'));
	EXPECT_FALSE(ft_isblank('F'));
	EXPECT_FALSE(ft_isblank('G'));
	EXPECT_FALSE(ft_isblank('W'));
	EXPECT_FALSE(ft_isblank('Z'));
	EXPECT_FALSE(ft_isblank('['));
	EXPECT_FALSE(ft_isblank('\\'));
	EXPECT_FALSE(ft_isblank('`'));
	EXPECT_FALSE(ft_isblank('a'));
	EXPECT_FALSE(ft_isblank('f'));
	EXPECT_FALSE(ft_isblank('g'));
	EXPECT_FALSE(ft_isblank('w'));
	EXPECT_FALSE(ft_isblank('z'));
	EXPECT_FALSE(ft_isblank('{'));
	EXPECT_FALSE(ft_isblank('\x7F'));
	EXPECT_FALSE(ft_isblank('\x80'));
	EXPECT_FALSE(ft_isblank('\xFF'));
}
