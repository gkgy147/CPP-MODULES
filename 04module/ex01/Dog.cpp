/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:53:02 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 13:43:09 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
    std::cout << this->_type << " constructor called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation has failed : " << e.what() << std::endl;
    }
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << this->_type << " destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "BOW BOW!" << std::endl;
}

Dog::Dog( const Dog& src )  : Animal(src)
{
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "Dog Assignment operator called." << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain( *src._brain );
    }
    return *this;
}