/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 02:04:24 by grobert           #+#    #+#             */
/*   Updated: 2023/08/31 14:08:57 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << " ScavTrap " << this->_name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << " ScavTrap " << this->_name << " destroyed." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

void	ScavTrap::attack( std::string const& target ) {
	if (this->_energyPoints <= 0 || _hitPoints <= 0 ) {
		std::cout << " ScavTrap " << this->_name << " is out of energy." << std::endl;
		return;
	}

	std::cout << " ScavTrap " << this->_name << " attacks " << target << " at range, causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

void	ScavTrap::guardGate() {
	std::cout << " ScavTrap " << this->_name << " is now in Gate keeper mode. " << std::endl;
}

