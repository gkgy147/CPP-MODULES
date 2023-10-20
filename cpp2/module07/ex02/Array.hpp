/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:34:23 by grobert           #+#    #+#             */
/*   Updated: 2023/10/09 23:28:16 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>


template <typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &a);
		~Array(void);
		
		//Operators
		Array	&operator = (Array const &a);
		T		&operator [] (int index);
		//T const	&operator [] (int index) const;
		
		//Methods
		int		size(void) const;

		class IndexOutOfBounds: public std::exception
        	{
            		public:
                		virtual const char	*what() const throw()
					{ return ("Index out of bounds"); };
        	};
	private:
		T	*_arr;
		int	_size;
};

template <typename T>
Array<T>::Array(void):_arr(0), _size(0) {};

template <typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n)
{
	for (int i = 0; i < (int)n; i++)
		this->_arr[i] = 0;
	return;
};

template <typename T>
Array<T>::Array(Array<T> const &a): _arr(0), _size(0)
{
	*this = a;
	return ;
};

template <typename T>
Array<T>::~Array(void)
{
	delete [] this->_arr;
	return ;
};

template <typename T>
Array<T>	&Array<T>::operator = (Array<T> const &a)
{
	if (this == &a)
		return (*this);
	delete [] this->_arr;
	this->_arr = new T[a.size()];
	this->_size = a.size();
	for (int i = 0; i < this->_size; i++)
		this->_arr[i] = a._arr[i];
	return (*this);
}

template <typename T>
T	&Array<T>::operator [] (int index)
{
	if (index < 0)
		index += this->_size;
	if (index >= this->_size || index < 0)
		throw Array::IndexOutOfBounds();
	return (this->_arr[index]);
}

template <typename T>
int	Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
std::ostream    &operator << (std::ostream &out, Array<T> const &a)
{
	out << "[";
	for (int i = 0; i < (int)a.size(); i++)
	{
		out << a[i];
		if (i != (int)a.size() - 1)
			out << ", ";
	}
	out << "]";
	return (out);
}

#endif