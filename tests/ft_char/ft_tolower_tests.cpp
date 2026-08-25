/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_tests.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 03:11:24 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:14:25 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_tolower)
{
	EXPECT_EQ(ft_tolower('\0'), '\0');
	EXPECT_EQ(ft_tolower('\b'), '\b');
	EXPECT_EQ(ft_tolower('\t'), '\t');
	EXPECT_EQ(ft_tolower('\n'), '\n');
	EXPECT_EQ(ft_tolower('\v'), '\v');
	EXPECT_EQ(ft_tolower('\f'), '\f');
	EXPECT_EQ(ft_tolower('\r'), '\r');
	EXPECT_EQ(ft_tolower('\x0F'), '\x0F');
	EXPECT_EQ(ft_tolower('\x10'), '\x10');
	EXPECT_EQ(ft_tolower('\x1F'), '\x1F');
	EXPECT_EQ(ft_tolower(' '), ' ');
	EXPECT_EQ(ft_tolower('!'), '!');
	EXPECT_EQ(ft_tolower('$'), '$');
	EXPECT_EQ(ft_tolower('*'), '*');
	EXPECT_EQ(ft_tolower('\''), '\'');
	EXPECT_EQ(ft_tolower(','), ',');
	EXPECT_EQ(ft_tolower('.'), '.');
	EXPECT_EQ(ft_tolower('/'), '/');
	EXPECT_EQ(ft_tolower('0'), '0');
	EXPECT_EQ(ft_tolower('1'), '1');
	EXPECT_EQ(ft_tolower('2'), '2');
	EXPECT_EQ(ft_tolower('9'), '9');
	EXPECT_EQ(ft_tolower(':'), ':');
	EXPECT_EQ(ft_tolower('@'), '@');
	EXPECT_EQ(ft_tolower('A'), 'a');
	EXPECT_EQ(ft_tolower('F'), 'f');
	EXPECT_EQ(ft_tolower('G'), 'g');
	EXPECT_EQ(ft_tolower('W'), 'w');
	EXPECT_EQ(ft_tolower('Z'), 'z');
	EXPECT_EQ(ft_tolower('['), '[');
	EXPECT_EQ(ft_tolower('\\'), '\\');
	EXPECT_EQ(ft_tolower('`'), '`');
	EXPECT_EQ(ft_tolower('a'), 'a');
	EXPECT_EQ(ft_tolower('f'), 'f');
	EXPECT_EQ(ft_tolower('g'), 'g');
	EXPECT_EQ(ft_tolower('w'), 'w');
	EXPECT_EQ(ft_tolower('z'), 'z');
	EXPECT_EQ(ft_tolower('{'), '{');
	EXPECT_EQ(ft_tolower('\x7F'), '\x7F');
	EXPECT_EQ(ft_tolower('\x80'), '\x80');
	EXPECT_EQ(ft_tolower('\xFF'), '\xFF');
}
