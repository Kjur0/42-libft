/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 03:10:57 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:10:58 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_isupper)
{
	EXPECT_FALSE(ft_isupper('\0'));
	EXPECT_FALSE(ft_isupper('\b'));
	EXPECT_FALSE(ft_isupper('\t'));
	EXPECT_FALSE(ft_isupper('\n'));
	EXPECT_FALSE(ft_isupper('\v'));
	EXPECT_FALSE(ft_isupper('\f'));
	EXPECT_FALSE(ft_isupper('\r'));
	EXPECT_FALSE(ft_isupper('\x0F'));
	EXPECT_FALSE(ft_isupper('\x10'));
	EXPECT_FALSE(ft_isupper('\x1F'));
	EXPECT_FALSE(ft_isupper(' '));
	EXPECT_FALSE(ft_isupper('!'));
	EXPECT_FALSE(ft_isupper('$'));
	EXPECT_FALSE(ft_isupper('*'));
	EXPECT_FALSE(ft_isupper('\''));
	EXPECT_FALSE(ft_isupper(','));
	EXPECT_FALSE(ft_isupper('.'));
	EXPECT_FALSE(ft_isupper('/'));
	EXPECT_FALSE(ft_isupper('0'));
	EXPECT_FALSE(ft_isupper('1'));
	EXPECT_FALSE(ft_isupper('2'));
	EXPECT_FALSE(ft_isupper('9'));
	EXPECT_FALSE(ft_isupper(':'));
	EXPECT_FALSE(ft_isupper('@'));
	EXPECT_TRUE(ft_isupper('A'));
	EXPECT_TRUE(ft_isupper('F'));
	EXPECT_TRUE(ft_isupper('G'));
	EXPECT_TRUE(ft_isupper('W'));
	EXPECT_TRUE(ft_isupper('Z'));
	EXPECT_FALSE(ft_isupper('['));
	EXPECT_FALSE(ft_isupper('\\'));
	EXPECT_FALSE(ft_isupper('`'));
	EXPECT_FALSE(ft_isupper('a'));
	EXPECT_FALSE(ft_isupper('f'));
	EXPECT_FALSE(ft_isupper('g'));
	EXPECT_FALSE(ft_isupper('w'));
	EXPECT_FALSE(ft_isupper('z'));
	EXPECT_FALSE(ft_isupper('{'));
	EXPECT_FALSE(ft_isupper('\x7F'));
	EXPECT_FALSE(ft_isupper('\x80'));
	EXPECT_FALSE(ft_isupper('\xFF'));
}
