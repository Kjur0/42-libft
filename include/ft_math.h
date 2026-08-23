/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 04:32:41 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:03:04 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

//## integer math

/** @brief absolute value
 * 
 * @param n number to get absolute value of
 * @return absolute value of `n`
 */
int		ft_abs(int n);

/** @brief maximum value
 * 
 * @param a first number
 * @param b second number
 * @return maximum value of `a` and `b`
 */
int		ft_max(int a, int b);
/** @brief minimum value
 * 
 * @param a first number
 * @param b second number
 * @return minimum value of `a` and `b`
 */
int		ft_min(int a, int b);
/** @brief clamped value
 * 
 * ensure that `n` is between `min` and `max`
 * 
 * @param n number to clamp
 * @param min minimum value
 * @param max maximum value
 * @return clamped value of `n`
 */
int		ft_clamp(int n, int min, int max);

/** @brief power function
 * 
 * @param base base number
 * @param exp exponent
 * @return `base` raised to the power of `exp`
 */
int		ft_pow(int base, int exp);
/** @brief square root function
 * 
 * @param n number to get square root of
 * @return square root of `n`
 * @retval -1 `n` is negative or not a perfect square
 */
int		ft_sqrt(int n);

//## floating point math

/** @brief absolute value
 * 
 * @param n number to get absolute value of
 * @return absolute value of `n`
 */
double	ft_fabs(double n);

/** @brief maximum value
 * 
 * @param a first number
 * @param b second number
 * @return maximum value of `a` and `b`
 */
double	ft_fmax(double a, double b);
/** @brief minimum value
 * 
 * @param a first number
 * @param b second number
 * @return minimum value of `a` and `b`
 */
double	ft_fmin(double a, double b);
/** @brief clamped value
 * 
 * ensure that `n` is between `min` and `max`
 * 
 * @param n number to clamp
 * @param min minimum value
 * @param max maximum value
 * @return clamped value of `n`
 */
double	ft_fclamp(double n, double min, double max);

/** @brief power function
 * 
 * @param base base number
 * @param exp exponent
 * @return `base` raised to the power of `exp`
 */
double	ft_fpow(double base, int exp);

/** @brief round up
 * 
 * @param n number to round up
 * @return rounded up value of `n`
 */
double	ft_ceil(double n);
/** @brief round down
 * 
 * @param n number to round down
 * @return rounded down value of `n`
 */
double	ft_floor(double n);
/** @brief round to nearest integer
 * 
 * @param n number to round
 * @return rounded value of `n`
 */
double	ft_round(double n);

#endif
