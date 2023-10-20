/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:05:39 by grobert           #+#    #+#             */
/*   Updated: 2023/10/09 18:00:59 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <stdlib.h>
#include <iostream>
#include <string>

class Base
{
	public:
		virtual ~Base(void);
};

class A: public Base
{
	public:
		~A(void);
};

class B: public Base
{
	public:
		~B(void);
};

class C: public Base
{
	public:
		~C(void);
};

#endif

