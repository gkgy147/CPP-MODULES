/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:05:18 by grobert           #+#    #+#             */
/*   Updated: 2023/10/09 20:10:12 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>
#include <cctype>

template <typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
T	min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T	max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}

#endif
