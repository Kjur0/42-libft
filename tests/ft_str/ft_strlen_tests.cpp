/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_tests.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:15:53 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/02 17:19:10 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

TEST(ft_str, ft_strlen)
{
	EXPECT_EQ(ft_strlen(""), 0);
	EXPECT_EQ(ft_strlen(nullptr), 0);
	EXPECT_EQ(ft_strlen("123456789"), 9);
	EXPECT_EQ(ft_strlen("SOME RANDOM STRING WITH A RANDOM LENGTH"), 39);
}
