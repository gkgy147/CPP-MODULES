/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:21:53 by grobert           #+#    #+#             */
/*   Updated: 2023/08/22 22:49:04 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon( Weapon& weapon ) {
	this->_weapon = &weapon;
}

void	HumanB::attack( void ) const {
	if (this->_weapon != NULL && this->_weapon->getType() != "") {
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	} else {
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
	}
}
