/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:28:21 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 15:56:47 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	ft_isalpha(int c);
extern int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
