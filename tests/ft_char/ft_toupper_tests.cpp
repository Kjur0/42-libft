/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_testscpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 03:11:24 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/25 03:16:34 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_char, ft_toupper)
{
	EXPECT_EQ(ft_toupper('\0'), '\0');
	EXPECT_EQ(ft_toupper('\b'), '\b');
	EXPECT_EQ(ft_toupper('\t'), '\t');
	EXPECT_EQ(ft_toupper('\n'), '\n');
	EXPECT_EQ(ft_toupper('\v'), '\v');
	EXPECT_EQ(ft_toupper('\f'), '\f');
	EXPECT_EQ(ft_toupper('\r'), '\r');
	EXPECT_EQ(ft_toupper('\x0F'), '\x0F');
	EXPECT_EQ(ft_toupper('\x10'), '\x10');
	EXPECT_EQ(ft_toupper('\x1F'), '\x1F');
	EXPECT_EQ(ft_toupper(' '), ' ');
	EXPECT_EQ(ft_toupper('!'), '!');
	EXPECT_EQ(ft_toupper('$'), '$');
	EXPECT_EQ(ft_toupper('*'), '*');
	EXPECT_EQ(ft_toupper('\''), '\'');
	EXPECT_EQ(ft_toupper(','), ',');
	EXPECT_EQ(ft_toupper('.'), '.');
	EXPECT_EQ(ft_toupper('/'), '/');
	EXPECT_EQ(ft_toupper('0'), '0');
	EXPECT_EQ(ft_toupper('1'), '1');
	EXPECT_EQ(ft_toupper('2'), '2');
	EXPECT_EQ(ft_toupper('9'), '9');
	EXPECT_EQ(ft_toupper(':'), ':');
	EXPECT_EQ(ft_toupper('@'), '@');
	EXPECT_EQ(ft_toupper('A'), 'A');
	EXPECT_EQ(ft_toupper('F'), 'F');
	EXPECT_EQ(ft_toupper('G'), 'G');
	EXPECT_EQ(ft_toupper('W'), 'W');
	EXPECT_EQ(ft_toupper('Z'), 'Z');
	EXPECT_EQ(ft_toupper('['), '[');
	EXPECT_EQ(ft_toupper('\\'), '\\');
	EXPECT_EQ(ft_toupper('`'), '`');
	EXPECT_EQ(ft_toupper('a'), 'A');
	EXPECT_EQ(ft_toupper('f'), 'F');
	EXPECT_EQ(ft_toupper('g'), 'G');
	EXPECT_EQ(ft_toupper('w'), 'W');
	EXPECT_EQ(ft_toupper('z'), 'Z');
	EXPECT_EQ(ft_toupper('{'), '{');
	EXPECT_EQ(ft_toupper('\x7F'), '\x7F');
	EXPECT_EQ(ft_toupper('\x80'), '\x80');
	EXPECT_EQ(ft_toupper('\xFF'), '\xFF');
}
