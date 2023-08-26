/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:46:12 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 01:29:36 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << "is born!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	*this = rhs;
	std::cout << "ClapTrap copy constructor called" <<std::endl;
}

ClapTrap& ClapTrap::operator= ( const ClapTrap &rhs ) {
	
	std::cout << " assignment operator called! " << std::endl;
	if (this != &rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
	}
    return *this;
}

void	ClapTrap::attack( std::string const& target )
{
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " has no more energy!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hitPoints <= amount) {
		std::cout << "ClapTrap " << _name << " is no more hitpoints!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name <<  " takes " << amount << " damage!" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_energyPoints <= 0 ) {
		std::cout << "ClapTrap " << _name << " has no more energy" << std::endl;
		return;
	}

	std::cout << "ClapTrap " << _name << " is self-healing for " << amount << " points " << std::endl;
	_energyPoints -= 1;
	_hitPoints += amount;
}

