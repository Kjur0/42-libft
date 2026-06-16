/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:25:06 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/16 15:33:52 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	ft_isdigit(int c);

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *nptr)
{
	long unsigned int	i;
	unsigned int		n;
	signed int			sign;

	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	sign = 1;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
		n = 10 * n - (nptr[i++] - '0');
	return (sign * n);
}
