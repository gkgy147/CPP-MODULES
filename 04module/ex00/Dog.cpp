/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:53:02 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 09:56:11 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
	std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << this->_type << " destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "BOW BOW!" << std::endl;
}
