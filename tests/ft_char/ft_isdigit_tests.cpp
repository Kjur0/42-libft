/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 01:36:10 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:10:28 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_isdigit)
{
	EXPECT_FALSE(ft_isdigit('\0'));
	EXPECT_FALSE(ft_isdigit('\b'));
	EXPECT_FALSE(ft_isdigit('\t'));
	EXPECT_FALSE(ft_isdigit('\n'));
	EXPECT_FALSE(ft_isdigit('\v'));
	EXPECT_FALSE(ft_isdigit('\f'));
	EXPECT_FALSE(ft_isdigit('\r'));
	EXPECT_FALSE(ft_isdigit('\x0F'));
	EXPECT_FALSE(ft_isdigit('\x10'));
	EXPECT_FALSE(ft_isdigit('\x1F'));
	EXPECT_FALSE(ft_isdigit(' '));
	EXPECT_FALSE(ft_isdigit('!'));
	EXPECT_FALSE(ft_isdigit('$'));
	EXPECT_FALSE(ft_isdigit('*'));
	EXPECT_FALSE(ft_isdigit('\''));
	EXPECT_FALSE(ft_isdigit(','));
	EXPECT_FALSE(ft_isdigit('.'));
	EXPECT_FALSE(ft_isdigit('/'));
	EXPECT_TRUE(ft_isdigit('0'));
	EXPECT_TRUE(ft_isdigit('1'));
	EXPECT_TRUE(ft_isdigit('2'));
	EXPECT_TRUE(ft_isdigit('9'));
	EXPECT_FALSE(ft_isdigit(':'));
	EXPECT_FALSE(ft_isdigit('@'));
	EXPECT_FALSE(ft_isdigit('A'));
	EXPECT_FALSE(ft_isdigit('F'));
	EXPECT_FALSE(ft_isdigit('G'));
	EXPECT_FALSE(ft_isdigit('W'));
	EXPECT_FALSE(ft_isdigit('Z'));
	EXPECT_FALSE(ft_isdigit('['));
	EXPECT_FALSE(ft_isdigit('\\'));
	EXPECT_FALSE(ft_isdigit('`'));
	EXPECT_FALSE(ft_isdigit('a'));
	EXPECT_FALSE(ft_isdigit('f'));
	EXPECT_FALSE(ft_isdigit('g'));
	EXPECT_FALSE(ft_isdigit('w'));
	EXPECT_FALSE(ft_isdigit('z'));
	EXPECT_FALSE(ft_isdigit('{'));
	EXPECT_FALSE(ft_isdigit('\x7F'));
	EXPECT_FALSE(ft_isdigit('\x80'));
	EXPECT_FALSE(ft_isdigit('\xFF'));
}
