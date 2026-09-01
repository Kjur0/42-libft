/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_tests.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:02:47 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/01 21:15:16 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.hpp>

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

size_t	split_len(char **split)
{
	size_t	i;

	if (!split)
		return (0);
	i = 0;
	while (split[i])
		i++;
	return (i);
}

TEST(ft_str, ft_split)
{
	char	**split;

	split = ft_split("Hello my awesome 42!", ' ');
	ASSERT_NE(split, nullptr);
	EXPECT_EQ(split_len(split), 4);
	EXPECT_STREQ(split[0], "Hello");
	EXPECT_STREQ(split[1], "my");
	EXPECT_STREQ(split[2], "awesome");
	EXPECT_STREQ(split[3], "42!");
	EXPECT_EQ(split[4], nullptr);
	free_split(split);

	split = ft_split(nullptr, ';');
	ASSERT_EQ(split, nullptr);

	split = ft_split("Hi, what's up?", '\n');
	ASSERT_NE(split, nullptr);
	EXPECT_EQ(split_len(split), 1);
	EXPECT_STREQ(split[0], "Hi, what's up?");
	EXPECT_EQ(split[1], nullptr);
	free_split(split);
}
