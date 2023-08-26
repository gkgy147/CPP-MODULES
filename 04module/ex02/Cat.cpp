/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:58:18 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 13:42:41 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::~Cat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete this->_brain;
}

void    Cat::makeSound( void ) const
{
    std::cout << "MEOOW!" << std::endl;
}

Cat::Cat( const Cat &src ) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat& Cat::operator=( const Cat &src )
{
    std::cout << "Cat assignment operator called." << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain( *src._brain );
    }
    return *this;
}