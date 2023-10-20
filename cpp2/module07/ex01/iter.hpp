/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:17:33 by grobert           #+#    #+#             */
/*   Updated: 2023/10/09 20:24:41 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T *arr, int len, void (*fun)(T &))
{
	for (int i = 0; i < len; i++)
		fun(arr[i]);
}

template <typename T>
void	print(T elem)
{
	std::cout << elem << std::endl;
}

#endif
