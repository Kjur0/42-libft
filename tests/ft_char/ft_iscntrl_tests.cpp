/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 01:36:10 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:10:27 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_iscntrl)
{
	EXPECT_TRUE(ft_iscntrl('\0'));
	EXPECT_TRUE(ft_iscntrl('\b'));
	EXPECT_TRUE(ft_iscntrl('\t'));
	EXPECT_TRUE(ft_iscntrl('\n'));
	EXPECT_TRUE(ft_iscntrl('\v'));
	EXPECT_TRUE(ft_iscntrl('\f'));
	EXPECT_TRUE(ft_iscntrl('\r'));
	EXPECT_TRUE(ft_iscntrl('\x0F'));
	EXPECT_TRUE(ft_iscntrl('\x10'));
	EXPECT_TRUE(ft_iscntrl('\x1F'));
	EXPECT_FALSE(ft_iscntrl(' '));
	EXPECT_FALSE(ft_iscntrl('!'));
	EXPECT_FALSE(ft_iscntrl('$'));
	EXPECT_FALSE(ft_iscntrl('*'));
	EXPECT_FALSE(ft_iscntrl('\''));
	EXPECT_FALSE(ft_iscntrl(','));
	EXPECT_FALSE(ft_iscntrl('.'));
	EXPECT_FALSE(ft_iscntrl('/'));
	EXPECT_FALSE(ft_iscntrl('0'));
	EXPECT_FALSE(ft_iscntrl('1'));
	EXPECT_FALSE(ft_iscntrl('2'));
	EXPECT_FALSE(ft_iscntrl('9'));
	EXPECT_FALSE(ft_iscntrl(':'));
	EXPECT_FALSE(ft_iscntrl('@'));
	EXPECT_FALSE(ft_iscntrl('A'));
	EXPECT_FALSE(ft_iscntrl('F'));
	EXPECT_FALSE(ft_iscntrl('G'));
	EXPECT_FALSE(ft_iscntrl('W'));
	EXPECT_FALSE(ft_iscntrl('Z'));
	EXPECT_FALSE(ft_iscntrl('['));
	EXPECT_FALSE(ft_iscntrl('\\'));
	EXPECT_FALSE(ft_iscntrl('`'));
	EXPECT_FALSE(ft_iscntrl('a'));
	EXPECT_FALSE(ft_iscntrl('f'));
	EXPECT_FALSE(ft_iscntrl('g'));
	EXPECT_FALSE(ft_iscntrl('w'));
	EXPECT_FALSE(ft_iscntrl('z'));
	EXPECT_FALSE(ft_iscntrl('{'));
	EXPECT_TRUE(ft_iscntrl('\x7F'));
	EXPECT_FALSE(ft_iscntrl('\x80'));
	EXPECT_FALSE(ft_iscntrl('\xFF'));
}
