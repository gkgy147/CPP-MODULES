/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:19:17 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 10:47:40 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimal" ) {
	std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type( type )
{
	std::cout << "WrongAnimal " << this->_type << " constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called " << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &src )
{
	std::cout << "WrongAnimal copy constructor called " << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal MAKESOUND called" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return this->_type;
}

