/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:52:06 by grobert           #+#    #+#             */
/*   Updated: 2023/08/22 22:07:27 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA()
{
}

void	HumanA::attack( void ) const {
	if (this->_weapon.getType() != "") {
		std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
	}
	else {
		std::cout << _name << " doesn't have a weapon  to attack. " << std::endl;
	}
}
