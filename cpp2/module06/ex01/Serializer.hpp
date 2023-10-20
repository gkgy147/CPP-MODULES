/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:58:24 by grobert           #+#    #+#             */
/*   Updated: 2023/10/09 14:36:44 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <cctype>
#include <stdint.h>
#include <iostream>
#include <string>

struct Data
{
	std::string data;
};

class Serializer
{
	public:
		Serializer(void);
		Serializer(Serializer const &s);
		~Serializer(void);

		Serializer	&operator=(Serializer const &rhs);

		static uintptr_t		serialize(Data *ptr);
		static Data*			deserialize(uintptr_t raw);
};

#endif
