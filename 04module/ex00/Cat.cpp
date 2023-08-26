/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:58:18 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 09:59:42 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "MEOOW!" << std::endl;
}
