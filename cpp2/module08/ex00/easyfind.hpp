/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 00:52:12 by grobert           #+#    #+#             */
/*   Updated: 2023/10/10 00:58:36 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void	easyfind(T &container, int n)
{
	if (std::find(container.begin(), container.end(), n) != container.end())
		std::cout << "[" << n << "]" << " found!" << std::endl;
	else
		std::cout << "[" << n << "]" << "Not found!" << std::endl;
	return;
};

