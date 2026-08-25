/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 01:36:10 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:10:30 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_isgraph)
{
	EXPECT_FALSE(ft_isgraph('\0'));
	EXPECT_FALSE(ft_isgraph('\b'));
	EXPECT_FALSE(ft_isgraph('\t'));
	EXPECT_FALSE(ft_isgraph('\n'));
	EXPECT_FALSE(ft_isgraph('\v'));
	EXPECT_FALSE(ft_isgraph('\f'));
	EXPECT_FALSE(ft_isgraph('\r'));
	EXPECT_FALSE(ft_isgraph('\x0F'));
	EXPECT_FALSE(ft_isgraph('\x10'));
	EXPECT_FALSE(ft_isgraph('\x1F'));
	EXPECT_FALSE(ft_isgraph(' '));
	EXPECT_TRUE(ft_isgraph('!'));
	EXPECT_TRUE(ft_isgraph('$'));
	EXPECT_TRUE(ft_isgraph('*'));
	EXPECT_TRUE(ft_isgraph('\''));
	EXPECT_TRUE(ft_isgraph(','));
	EXPECT_TRUE(ft_isgraph('.'));
	EXPECT_TRUE(ft_isgraph('/'));
	EXPECT_TRUE(ft_isgraph('0'));
	EXPECT_TRUE(ft_isgraph('1'));
	EXPECT_TRUE(ft_isgraph('2'));
	EXPECT_TRUE(ft_isgraph('9'));
	EXPECT_TRUE(ft_isgraph(':'));
	EXPECT_TRUE(ft_isgraph('@'));
	EXPECT_TRUE(ft_isgraph('A'));
	EXPECT_TRUE(ft_isgraph('F'));
	EXPECT_TRUE(ft_isgraph('G'));
	EXPECT_TRUE(ft_isgraph('W'));
	EXPECT_TRUE(ft_isgraph('Z'));
	EXPECT_TRUE(ft_isgraph('['));
	EXPECT_TRUE(ft_isgraph('\\'));
	EXPECT_TRUE(ft_isgraph('`'));
	EXPECT_TRUE(ft_isgraph('a'));
	EXPECT_TRUE(ft_isgraph('f'));
	EXPECT_TRUE(ft_isgraph('g'));
	EXPECT_TRUE(ft_isgraph('w'));
	EXPECT_TRUE(ft_isgraph('z'));
	EXPECT_TRUE(ft_isgraph('{'));
	EXPECT_FALSE(ft_isgraph('\x7F'));
	EXPECT_FALSE(ft_isgraph('\x80'));
	EXPECT_FALSE(ft_isgraph('\xFF'));
}
