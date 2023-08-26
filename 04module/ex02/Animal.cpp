/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 08:49:06 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 11:00:44 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal") {
	std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal( std::string type) : _type( type )
{
	std::cout << "Animal " << this->_type << " constructor called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "ANIMAL destructor called" << std::endl;
}

Animal::Animal( const Animal &src)
{
	std::cout << "Animal copy constructor called " << std::endl;
	*this = src;
}

Animal& Animal::operator=( const Animal& rhs)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if(this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

void Animal::makeSound( void ) const 
{
	std::cout << "Animal makeSound called " << std::endl;
}

std::string Animal::getType( void ) const
{
	return this->_type;
}

