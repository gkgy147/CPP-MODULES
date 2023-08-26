/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:51:00 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 11:01:44 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << this->_type << " constructer called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << this->_type << " destructor called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meoow!" << std::endl;
}
