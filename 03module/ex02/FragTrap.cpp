/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 07:23:38 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 07:36:41 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << " FRAG TRAP " << this->_name << " constructor called. " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << " FRAGTRAP " << this->_name << " destructor called. " << std::endl;
}

void	FragTrap::highFive( void ) {
	if (this->_energyPoints <= 0) {
		std::cout << " FRAGTRAP " << this->_name << " is out of energy. " << std::endl;
		return;
	}

	std::cout << " FLAGTRAP " << this->_name << " high five lovely people " << std::endl;
	this->_energyPoints -= 1;
}

