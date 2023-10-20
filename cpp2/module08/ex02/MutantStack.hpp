/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 07:08:40 by grobert           #+#    #+#             */
/*   Updated: 2023/10/10 07:39:50 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>

//https://www.youtube.com/watch?v=Y4yEOJgxISc
//https://www.geeksforgeeks.org/stack-in-cpp-stl/

template <typename T>
class	MutantStack: public std::stack<T>
{
	public:
		MutantStack(void): std::stack<T>() {};
		MutantStack(MutantStack const &ms): std::stack<T>(ms) {};
		~MutantStack(void) {};
		MutantStack	&operator = (MutantStack const &ms)
		{
			if (this == &ms)
				return (*this);
			this->c = ms.c;
			return (*this);
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void) { return this->c.begin(); }
		iterator	end(void) { return this->c.end(); }
};
