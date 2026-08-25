/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 03:10:38 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:10:41 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_islower)
{
	EXPECT_FALSE(ft_islower('\0'));
	EXPECT_FALSE(ft_islower('\b'));
	EXPECT_FALSE(ft_islower('\t'));
	EXPECT_FALSE(ft_islower('\n'));
	EXPECT_FALSE(ft_islower('\v'));
	EXPECT_FALSE(ft_islower('\f'));
	EXPECT_FALSE(ft_islower('\r'));
	EXPECT_FALSE(ft_islower('\x0F'));
	EXPECT_FALSE(ft_islower('\x10'));
	EXPECT_FALSE(ft_islower('\x1F'));
	EXPECT_FALSE(ft_islower(' '));
	EXPECT_FALSE(ft_islower('!'));
	EXPECT_FALSE(ft_islower('$'));
	EXPECT_FALSE(ft_islower('*'));
	EXPECT_FALSE(ft_islower('\''));
	EXPECT_FALSE(ft_islower(','));
	EXPECT_FALSE(ft_islower('.'));
	EXPECT_FALSE(ft_islower('/'));
	EXPECT_FALSE(ft_islower('0'));
	EXPECT_FALSE(ft_islower('1'));
	EXPECT_FALSE(ft_islower('2'));
	EXPECT_FALSE(ft_islower('9'));
	EXPECT_FALSE(ft_islower(':'));
	EXPECT_FALSE(ft_islower('@'));
	EXPECT_FALSE(ft_islower('A'));
	EXPECT_FALSE(ft_islower('F'));
	EXPECT_FALSE(ft_islower('G'));
	EXPECT_FALSE(ft_islower('W'));
	EXPECT_FALSE(ft_islower('Z'));
	EXPECT_FALSE(ft_islower('['));
	EXPECT_FALSE(ft_islower('\\'));
	EXPECT_FALSE(ft_islower('`'));
	EXPECT_TRUE(ft_islower('a'));
	EXPECT_TRUE(ft_islower('f'));
	EXPECT_TRUE(ft_islower('g'));
	EXPECT_TRUE(ft_islower('w'));
	EXPECT_TRUE(ft_islower('z'));
	EXPECT_FALSE(ft_islower('{'));
	EXPECT_FALSE(ft_islower('\x7F'));
	EXPECT_FALSE(ft_islower('\x80'));
	EXPECT_FALSE(ft_islower('\xFF'));
}
