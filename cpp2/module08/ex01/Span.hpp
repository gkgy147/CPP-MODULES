/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 05:22:54 by grobert           #+#    #+#             */
/*   Updated: 2023/10/10 05:59:18 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

//https://www.geeksforgeeks.org/containers-cpp-stl/
//https://www.youtube.com/watch?v=6OoSgY6NVVk
//https://www.geeksforgeeks.org/numeric-library-c-stl/
//https://www.geeksforgeeks.org/iterators-c-stl/

class Span
{
	public:
		Span(unsigned int n);
		Span(Span const &s);
		~Span(void);
		
		//Operators
		Span		&operator=(Span const &s);
		int const	&operator[](int index) const;
		
		//Methods
		void		addNumber(int n);
		int		size(void) const;
		unsigned int	longestSpan(void) const;
		unsigned int	shortestSpan(void) const;

		template<typename T>
			void	addIter(T start, T end);

		//Exceptions
		class	MaxSizeException:public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{ return ("Max size reached"); };
	};
		class	SpanException: public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{ return ("Cannot claculate the span"); };
	};
		class	IndexOutOfBounds: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{ return ("Index is out of Bounds"); };
	};
	
	private:
		std::vector<int>	_a;
		int			_size;
		unsigned int		_maxSize;
};

std::ostream	&operator << (std::ostream &out, Span const &a);

template<typename T>
void	Span::addIter(T start, T end)
{
	if (std::distance(start, end) + this->_size > this->_maxSize)
		throw Span::MaxSizeException();
	if (std::distance(start, end) <= 0)
		return;
	for (; start != end; start++)
		this->addNumber(*start);
	return;
}

#endif
